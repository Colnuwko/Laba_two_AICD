#pragma once
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cmath>
#include <complex>
using namespace std;

template <typename T>
class Vector {
private:
	T* data;
	int _size;
	T epsilon;
public:

	Vector() { //конструктор по умолчаниюю
		srand(time(0));
		_size = rand() % 3 + 10;
		epsilon = 0, 000001;
		data = new T[_size];
		for (size_t i = 0; i < _size; i++)
		{
			data[i] = rand() % 300 - 100;
		}

	}

	Vector(int size, T eps) { // конструктор с параметром
		if (size < 1) throw "Недопустимое значение";
		_size = size;
		epsilon = abs(eps);
		data = new T[size];
		cout << "Введите значения:\n";
		T a;
		for (size_t i = 0; i < size; i++)
		{
			cout << "A[" << i << "] = ";
			cin >> a;
			data[i] = a;
		}
	}
	Vector(const Vector& a) { // конструктор копирования
		data = new T[a._size];
		_size = a._size;
		epsilon = a.epsilon;
		for (size_t i = 0; i < a._size; i++)
		{
			data[i] = a.data[i];
		}
	}
	~Vector() { delete[] data; }
	void Vprint() // метод вывода
	{
		for (size_t i = 0; i < _size; i++)
		{
			cout << "A[" << i << "] = " << data[i];
		}
		cout << "/n";
	}
	int Get_size() { return _size; }
	/*	double operator()(int i) const {
			if (i<0 or i>_size) throw "Invalid index";
			return data[i];
		}

		double& operator()(int i) {
			if (i<0 or i>_size)  throw "Invalid index";
			return data[i];
		}
	*/
	T operator[](int i) const { //ЧТение и запись
		if (i<0 or i>_size) throw "Invalid index";
		return data[i];
	}

	T& operator[](int i) {
		if (i<0 or i>_size)  throw "Invalid index";
		return data[i];
	}
	friend ostream& operator<<(ostream& os, const Vector& a) //вывод
	{
		for (int i = 0; i < a._size; ++i)
		{
			os << left << a.data[i] << ' ';
		}
		return os;
	}
	bool operator==(const Vector& a) {				//Операторы сравнения
		if (_size != a._size) {
			return false;
		}
		else {
			for (size_t i = 0; i < _size; i++)
			{
				if (fabs(data[i] - a.data[i]) > epsilon) {
					return false;
				}
			}
		}
		return true;
	}
	bool operator!=(const Vector& a) {
		return !(*this == a);
	}
	Vector operator=(const Vector& a)
	{
		_size = a._size;
		for (size_t i = 0; i < _size; i++)
		{
			data[i] = a.data[i];
		}
		return *this;
	}

	Vector& operator+=(const Vector& a) {		//Сложение векторов
		if (_size != a._size) throw "Невозможжно сложить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] += a.data[i];
		}
		return *this;
	}
	Vector operator+(const Vector& a) const { // *this + a 
		Vector temp(*this);
		temp += a;
		//cout << temp << endl;
		Vector tmp(temp);
		return tmp;
	}
	Vector& operator-=(const Vector& a) {
		if (_size != a._size) throw "Невозможжно вычесть векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] -= a.data[i];
		}
		return *this;
	}
	Vector operator-(const Vector& a) const { //вычитание векторов
		Vector temp(*this);
		temp -= a;
		//cout << temp << endl;
		return temp;
	}
	Vector& operator*=(const Vector& a) { //*this это наш переданный темп, а а соотвтвествеенно как аргумент а
		if (_size != a._size) throw "Невозможжно умножить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] *= a.data[i];
		}
		return *this;
	}
	T operator*(const Vector& a) const { // скалярное умножение ВЕКТОРОВ
		Vector temp(*this);
		temp *= a;
		//cout << temp << endl;
		T scalar = 0;
		for (size_t i = 0; i < _size; i++)
		{
			scalar += temp.data[i];
		}
		return scalar;
	}
	Vector& operator*=(const T a) { // ВЕКТОР на число
		for (size_t i = 0; i < _size; i++)
		{
			data[i] *= a;
		}
		return *this;
	}
	Vector operator*(const T a) const { // 
		Vector temp(*this);
		temp *= a;
		//cout << temp << endl;
		return temp;
	}
	friend Vector operator*(const T b, const Vector& a) { // Число на вектор
		Vector temp(a);
		temp *= b;
		//cout << temp << endl;
		return temp;
	}

	/*Vector& operator/=(const Vector& a) { //*this это наш переданный темп, а а соотвтвествеенно как аргумент а
		if (_size != a._size) throw "Невозможжно разделить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			if (a.data[i] == 0) throw "нельзя делить на ноль";
			data[i] /= a.data[i];
		}
		return *this;
	}
	Vector operator/(const Vector& a) const { // *this + a
		Vector temp(*this);
		temp /= a;
		//cout << temp << endl;
		return temp;
	}
	*/
	Vector& operator/=(const T a) { //*this это наш переданный темп, а а соотвтвествеенно как аргумент а
		if (a == 0) throw "Невозможжно разделить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] /= a;
		}
		return *this;
	}
	Vector operator/(const T a) const { // *this + a 
		Vector temp(*this);
		temp /= a;
		//cout << temp << endl;
		return temp;
	}
	static T square(Vector& a, Vector& b)// вычисление площади треугольника черзе 2 вектора
	{
		return 0.5 * sin(a, b) * length(a, b);
	}
	static T sin(Vector a, Vector b) //вычесление синуса для площади
	{
		if (a._size != b._size) throw "Векторы не равны";
		T chislitel = 0;
		T temp = 0, tmp = 0;
		T znamenatel = 1;
		//for (size_t i = 0; i < a._size; i++)
		//{
		chislitel = a * b;

		//}
		for (size_t i = 0; i < a._size; i++)
		{
			temp += pow(a.data[i], 2);
			tmp += pow(b.data[i], 2);
		}
		temp = sqrt(temp);
		tmp = sqrt(tmp);
		znamenatel = temp * tmp;
		return sqrt(1 - pow((chislitel / znamenatel), 2));
	}
	static T length(Vector a, Vector b) //вычесление произведения длин векторов
	{
		T temp = 0;
		T tmp = 0;
		for (size_t i = 0; i < a._size; i++)
		{
			temp += pow(a.data[i], 2);
			tmp += pow(b.data[i], 2);
		}
		temp = sqrt(temp);
		tmp = sqrt(tmp);
		return temp * tmp;
	}
};
template <typename V>
class Vector <complex<V>>
{
private:
	complex<V>* data;
	int _size;
	complex<V> epsilon;
public:
	Vector() { //конструктор по умолчаниюю
		srand(time(0));
		_size = rand() % 3 + 10;
		epsilon = complex<V>(0.0001, 0.00001);
		data = new complex<V>[_size];
		for (size_t i = 0; i < _size; i++)
		{
			data[i] = complex<V>((V)rand() /3, (V)rand() /4);
		}

	}

	Vector(int size, complex<V> eps) { // конструктор с параметром
		if (size < 1) throw "Недопустимое значение";
		_size = size;
		data = new complex<V>[size];
		cout << "Введите значения:\n";
		V a=0, b=0;
		for (size_t i = 0; i < size; i++)
		{
			cout << "Вводите сначала действительную часть";
			cin >> a;
			cout << "Вводите мнимую часть";
			cin >> b;
			data[i] = complex<V>(a,b);
			
		}
	}
	Vector(const Vector<complex<V>>& a) { // конструктор копирования
		data = new complex<V>[a._size];
		_size = a._size;
		epsilon = a.epsilon;
		for (size_t i = 0; i < a._size; i++)
		{
			data[i] = a.data[i];
		}
	}
	~Vector() { delete[] data; }
	friend ostream& operator<<(ostream& os, const Vector<complex<V>>& a) //вывод
	{
		for (int i = 0; i < a._size; ++i)
		{
			os << left << a.data[i] << ' ';
		}
		return os;
	}
	complex<V> operator[](int i) const { //ЧТение и запись
		if (i<0 or i>_size) throw "Invalid index";
		return data[i];
	}

	complex<V>& operator[](int i) {
		if (i<0 or i>_size)  throw "Invalid index";
		return data[i];
	}

	bool operator==(const Vector<complex<V>>& a) {				//Операторы сравнения
		if (_size != a._size) {
			return false;
		}
		else {
			for (size_t i = 0; i < _size; i++)
			{
				if ((data[i] - a.data[i]) > epsilon) {

					return false;
				}
			}
		}
		return true;
	}
	Vector<complex<V>> operator=(const Vector<complex<V>>& a)
	{
		_size = a._size;
		for (size_t i = 0; i < _size; i++)
		{
			data[i] = a.data[i];
		}
		return *this;
	}

	Vector<complex<V>>& operator+=(const Vector<complex<V>>& a) {		//Сложение векторов
		if (_size != a._size) throw "Невозможжно сложить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] += a.data[i];
		}
		return *this;
	}
	Vector<complex<V>> operator+(const Vector<complex<V>>& a) const { // *this + a 
		Vector temp(*this);
		temp += a;
		//cout << temp << endl;
		Vector tmp(temp);
		return tmp;
	}
	Vector<complex<V>>& operator-=(const Vector<complex<V>>& a) {
		if (_size != a._size) throw "Невозможжно вычесть векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] -= a.data[i];
		}
		return *this;
	}
	Vector<complex<V>> operator-(const Vector<complex<V>>& a) const { //вычитание векторов
		Vector temp(*this);
		temp -= a;
		//cout << temp << endl;
		return temp;
	}
	Vector<complex<V>>& operator*=(const Vector<complex<V>>& a) { //*this это наш переданный темп, а а соотвтвествеенно как аргумент а
		if (_size != a._size) throw "Невозможжно умножить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] *= a.data[i];
		}
		return *this;
	}
	complex<V> operator*(const Vector<complex<V>>& a) const { // скалярное умножение ВЕКТОРОВ
		Vector <complex<V>>temp(*this);
		//cout << temp << endl;
		temp *= a;
		complex<V>scalar(0, 0);
		for (size_t i = 0; i < _size; i++)
		{
			scalar += temp.data[i];
		}
		return scalar;
	}
	Vector<complex<V>>& operator*=(const complex<V> a) { // ВЕКТОР на число
		for (size_t i = 0; i < _size; i++)
		{
			data[i] *= a;
		}
		return *this;
	}
	Vector<complex<V>> operator*(const complex<V> a) const { // 
		Vector <complex<V>>temp(*this);
		temp *= a;
		//cout << temp << endl;
		return temp;
	}
	friend Vector<complex<V>> operator*(const complex<V> b, const Vector<complex<V>>& a) { // Число на вектор
		Vector <complex<V>>temp(a);
		temp *= b;
		//cout << temp << endl;
		return temp;
	}
	Vector<complex<V>>& operator/=(const complex<V> a) { //*this это наш переданный темп, а а соотвтвествеенно как аргумент а
		//if (a.real == 0 && a.imag==0) throw "Невозможжно разделить векторы";
		for (size_t i = 0; i < _size; i++)
		{
			data[i] /= a;
		}
		return *this;
	}
	Vector<complex<V>> operator/(const complex<V> a) const { // *this + a 
		Vector<complex<V>> temp(*this);
		temp /= a;
		//cout << temp << endl;
		return temp;
	}
	static complex<V> square(Vector<complex<V>> &a, Vector<complex<V>> &b)// вычисление площади треугольника черзе 2 вектора
	{ 
		complex<V> x(0.5, 0);
		return x * sin(a, b) * length(a, b);
	}
	static complex<V> sin(Vector<complex<V>> a, Vector<complex<V>> b) //вычесление синуса для площади
	{
		if (a._size != b._size) throw "Векторы не равны";
		complex<V> chislitel(0, 0);
		complex<V> temp(0, 0);
		complex<V> tmp(0,0);
		complex<V> znamenatel(1,0);
		//for (size_t i = 0; i < a._size; i++)
		//{
		chislitel = a * b;

		//}
		for (size_t i = 0; i < a._size; i++)
		{
			temp += pow(a.data[i], 2);
			tmp += pow(b.data[i], 2);
		}
		temp = sqrt(temp);
		tmp = sqrt(tmp);
		znamenatel = temp * tmp;
		complex<V> w(1, 0);
		complex<V> q(2, 0);
		return sqrt(w - pow((chislitel / znamenatel), q));
	}
	static complex<V> length(Vector<complex<V>> a, Vector<complex<V>> b) //вычесление произведения длин векторов
	{
		complex<V> temp(0, 0);
		complex<V> tmp(0, 0);
		for (size_t i = 0; i < a._size; i++)
		{
			temp += pow(a.data[i], 2);
			tmp += pow(b.data[i], 2);
		}
		temp = sqrt(temp);
		tmp = sqrt(tmp);
		return temp * tmp;
	}
};