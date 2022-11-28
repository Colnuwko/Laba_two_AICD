#include <iostream>
#include <string>
#include <conio.h>
#include "Header.h"

using namespace std;
void menu_2()
{
	system("cls");
	cout << "1. Создать рандомный вектор" << endl;
	cout << "2. Создать вектор с параметрами" << endl;
	cout << "3. Создать два одинаковых вектора" << endl;


}
void menu()
{
	system("cls");
	cout << "Выберите тип данных" << endl;
	cout << "1. int" << endl;
	cout << "2. double" << endl;
	cout << "3. float" << endl;
	cout << "4. complex<double>" << endl;
	cout << "5. complex<float>" << endl;
}
void menu_3()
{
	system("cls");
	cout << "1. Сложить векторы" << endl;
	cout << "2. Вычесть векторы" << endl;
	cout << "3. Найти скалярное произведение" << endl;
	cout << "4. Разделить вектор на число" << endl;
	cout << "5. Умножить вектор на число" << endl;
	cout << "6. вычислить площадь треугольника" << endl;
	cout << "7. Сравнить вектора" << endl;
	cout << "8. Изменить элемент вектора" << endl;
	cout << "esc -  выход" << endl;
}
int get_key()
{
	int key;
	key = _getch();
	system("cls");
	return key;
}

int main()
{

	setlocale(LC_ALL, "Rus");
	int count;
	int size;
	setlocale(LC_ALL, "Rus");
	int key = 0;
	try
	{
	while (key != 27)
	{
		while (key != 27)
		{
			menu();
			key = get_key();
			switch (key)
			{
			case 49:
			{
				Vector <int>A;
				Vector <int>B;
				cout << "Хорошо продолжим.." << endl;
				int key = 0;
				while (key != 27)
				{
					key = get_key();
					menu_2();
					switch (key)
					{
					case 49:
					{
						Vector<int> b;
						B = b;
						cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "Давайте заполгним наши векторы" << endl << "Введите размерность первого вектора" << endl;
						int size_one;
						int size_two;
						int epsilon;
						cin >> size_one;
						cout << "А теперь введем размерность 2 вектора"<<endl;
						cin >> size_two;
						cout << "Замечательно, а теперь введите точность сравнения" << endl;
						cin >> epsilon;
						cout << "Самое время заполнить вектора" << endl;
						Vector <int>a(size_one, epsilon);
						cout << endl << "Остался последний вектор" << endl;
						Vector <int>b(size_two, epsilon);
						A = a;
						B = b;
						cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto Par;
						_getch();
						key = 27;
						break;
					}
					case 51:
					{
						system("cls");
						cout << "1. Создать два моих собственных вектора" << endl << "2. Создать два одинаковых и рандомных вектора" << endl;
						key = get_key();
						switch (key)
						{
						case 49:
						{
							int epsilon;
							cout << "Давайте заполгним наши векторы" << endl << "Введите размерность векторов" << endl;
							cin >> size;
							cout << "Замечательно, а теперь введите точность сравнения" << endl;
							cin >> epsilon;
							cout << "Самое время заполнить вектора" << endl;
							Vector <int>a(size, epsilon);
							A = a;
							B = a;
							cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto My_copy;
							_getch();
							key = 27;
							break;
						}
						case 50:
						{
							B = A;
							cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto random_copy;
							_getch();
							key = 27;
							break;
						}
						}
						_getch();
						break;
					}
					}

				}//
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "Вектор А: " << A << endl << "Вектор В: " << B << endl;
					key = get_key();
					Vector <int>res;
					switch (key)
					{
					case 49:
					{

						res = A + B;
						cout << "A + B = " << res << endl;
						_getch();
						break;
					}
					case 50:
					{
						while (key != 0) {
							cout << "Шо вычитаем?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
							if (key == 49) { res = A - B; cout << "A - B = " << res << endl; key = 0; }

							else {
								if (key == 50) { res = B - A; cout << "B - A = " << res << endl;  key = 0; }
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 51:
					{
						double x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						double x;
						cout << "Введите делитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что делим?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
							if (key == 49) {
								res = A / x; cout << "A / x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = B / x; cout << "B / x = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 53:
					{
						double x;
						cout << "Введите множитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что на что умножаем?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
							if (key == 49) {
								res = A * x; cout << "A * x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = x * B; cout << "x * B = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 54:
					{
						int x;
						x = B.square(A, B);
						cout << "Площадь = " << x << endl;
						_getch();
						break;
					}
					case 55:
					{
						if (A == B) cout << A << "==" << B << endl;
						else cout << A << "!=" << B << endl;
						_getch();
						break;
					}
					case 56:
					{
						repeat:
						cout << "1. Изменить значения вектора 1" << endl << "2. Изменить значения вектора 2" << endl;
						int x;
						x=get_key()-48;
						if (x == 1)
						{
						
							cout <<"Выберите элемент" << A<<endl;
							x=get_key()-48;
							if (x < A.Get_size()+1)
							{
								int temp = A[x-1];
								cout << "Введите новое значение"<<endl;
								cin >> A[x-1];
								cout << "предыдущее значение: "<<temp<<"изменено на "<< A[x-1]<<endl;

							}
							else
							{
								cout << "Введеный индекс выходит за рамки вектора"<<endl;
								_getch();
								goto repeat;
							}
						}
						else 
						{
							if (x == 2)
							{
								cout << "Выберите элемент" << B<<endl;
								x=get_key()-48;
								if (x < B.Get_size() + 1)
								{
									int temp = B[x-1];
									cout << "Введите новое значение"<<endl;
									cin >> B[x-1];
									cout << "предыдущее значение: " << temp << "изменено на " << B[x-1] << endl;

								}
								else
								{
									cout << "Введеный индекс выходит за рамки вектора"<<endl;
									_getch();
									goto repeat;
								}
							}
							else
							{
								cout <<"У вас только два выбора! Красная или синия таблетка?" << endl;
								_getch();
								goto repeat;
							}
						}

						_getch();
						break;
					}
					case 27:
					{
						system("cls");
						break;
					}
					}
				}
				_getch();
				break;
			}

			case 50:
			{
				Vector <double>A;
				Vector <double>B;
				cout << "Хорошо продолжим.." << endl;
				int key = 0;
				while (key != 27)
				{
					key = get_key();
					menu_2();
					switch (key)
					{
					case 49:
					{
						Vector<double> b;
						B = b;
						cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "Давайте заполгним наши векторы" << endl << "Введите размерность первого вектора" << endl;
						int size_one, size_two;
						double epsilon;
						cin >> size_one;
						cout << "А теперь введем размерность 2 вектора" << endl;
						cin >> size_two;
						cout << "Замечательно, а теперь введите точность сравнения" << endl;
						cin >> epsilon;
						cout << "Самое время заполнить вектора" << endl;
						Vector <double>a(size_one, epsilon);
						cout << endl << "Остался последний вектор" << endl;
						Vector <double>b(size_two, epsilon);
						A = a;
						B = b;
						cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto Par;
						_getch();
						key = 27;
						break;
					}
					case 51:
					{
						system("cls");
						cout << "1. Создать два моих собственных вектора" << endl << "2. Создать два одинаковых и рандомных вектора" << endl;
						key = get_key();
						switch (key)
						{
						case 49:
						{
							double epsilon;
							cout << "Давайте заполгним наши векторы" << endl << "Введите размерность векторов" << endl;
							cin >> size;
							cout << "Замечательно, а теперь введите точность сравнения" << endl;
							cin >> epsilon;
							cout << "Самое время заполнить вектора" << endl;
							Vector <double>a(size, epsilon);
							A = a;
							B = a;
							cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto My_copy;
							_getch();
							key = 27;
							break;
						}
						case 50:
						{
							B = A;
							cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto random_copy;
							_getch();
							key = 27;
							break;
						}
						}
						_getch();
						break;
					}
					}

				}//
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "Вектор А: " << A << endl << "Вектор В: " << B << endl;
					key = get_key();
					Vector <double>res;
					switch (key)
					{
					case 49:
					{
						res = A + B;
						cout << "A + B = " << res << endl;
						_getch();
						break;
					}
					case 50:
					{
						while (key != 0) {
							cout << "Шо вычитаем?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
							if (key == 49) { res = A - B; cout << "A - B = " << res << endl; key = 0; }

							else {
								if (key == 50) { res = B - A; cout << "B - A = " << res << endl;  key = 0; }
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 51:
					{
						double x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						double x;
						cout << "Введите делитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что делим?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
							if (key == 49) {
								res = A / x; cout << "A / x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = B / x; cout << "B / x = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 53:
					{
						double x;
						cout << "Введите множитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что на что умножаем?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
							if (key == 49) {
								res = A * x; cout << "A * x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = x * B; cout << "x * B = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 54:
					{
						int x;
						x = B.square(A, B);
						cout << "Площадь = " << x << endl;
						_getch();
						break;
					}
					case 55:
					{
						if (A == B) cout << A << "==" << B << endl;
						else cout << A << "!=" << B << endl;
						_getch();
						break;
					}
					case 56:
					{
					repeatDouble:
						cout << "1. Изменить значения вектора 1" << endl << "2. Изменить значения вектора 2" << endl;
						int x;
						x = get_key() - 48;
						if (x == 1)
						{

							cout << "Выберите элемент" << A << endl;
							x = get_key() - 48;
							if (x < A.Get_size() + 1)
							{
								double temp = A[x - 1];
								cout << "Введите новое значение" << endl;
								cin >> A[x - 1];
								cout << "предыдущее значение: " << temp << "изменено на " << A[x - 1] << endl;

							}
							else
							{
								cout << "Введеный индекс выходит за рамки вектора" << endl;
								_getch();
								goto repeatDouble;
							}
						}
						else
						{
							if (x == 2)
							{
								cout << "Выберите элемент" << B << endl;
								x = get_key() - 48;
								if (x < B.Get_size() + 1)
								{
									double temp = B[x - 1];
									cout << "Введите новое значение" << endl;
									cin >> B[x - 1];
									cout << "предыдущее значение: " << temp << "изменено на " << B[x - 1] << endl;

								}
								else
								{
									cout << "Введеный индекс выходит за рамки вектора" << endl;
									_getch();
									goto repeatDouble;
								}
							}
							else
							{
								cout << "У вас только два выбора! Красная или синия таблетка?" << endl;
								_getch();
								goto repeatDouble;
							}
						}

						_getch();
						break;
					}
					case 27:
					{
						system("cls");
						break;
					}
					}
				}
				_getch();
				break;
			}
			case 51: 
			{
				Vector <float>A;
				Vector <float>B;
				cout << "Хорошо продолжим.." << endl;
				int key = 0;
				while (key != 27)
				{
					key = get_key();
					menu_2();
					switch (key)
					{
					case 49:
					{
						Vector<float> b;
						B = b;
						cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "Давайте заполгним наши векторы" << endl << "Введите размерность первого вектора" << endl;
						int size_one,size_two;
						float epsilon;
						cin >> size_one;
						cout << "А теперь введем размерность 2 вектора" << endl;
						cin >> size_two;
						cout << "Замечательно, а теперь введите точность сравнения" << endl;
						cin >> epsilon;
						cout << "Самое время заполнить вектора" << endl;
						Vector <float>a(size_one, epsilon);
						cout << endl << "Остался последний вектор" << endl;
						Vector <float>b(size_two, epsilon);
						A = a;
						B = b;
						cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto Par;
						_getch();
						key = 27;
						break;
					}
					case 51:
					{
						system("cls");
						cout << "1. Создать два моих собственных вектора" << endl << "2. Создать два одинаковых и рандомных вектора" << endl;
						key = get_key();
						switch (key)
						{
						case 49:
						{
							float epsilon;
							cout << "Давайте заполгним наши векторы" << endl << "Введите размерность векторов" << endl;
							cin >> size;
							cout << "Замечательно, а теперь введите точность сравнения" << endl;
							cin >> epsilon;
							cout << "Самое время заполнить вектора" << endl;
							Vector <float>a(size, epsilon);
							A = a;
							B = a;
							cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto My_copy;
							_getch();
							key = 27;
							break;
						}
						case 50:
						{
							B = A;
							cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto random_copy;
							_getch();
							key = 27;
							break;
						}
						}
						_getch();
						break;
					}
					}

				}
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "Вектор А: " << A << endl << "Вектор В: " << B << endl;
					key = get_key();
					Vector <float>res;
					switch (key)
					{
					case 49:
					{
						res = A + B;
						cout << "A + B = " << res << endl;
						_getch();
						break;
					}
					case 50:
					{
						while (key != 0) {
							cout << "Шо вычитаем?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
							if (key == 49) { res = A - B; cout << "A - B = " << res << endl; key = 0; }

							else {
								if (key == 50) { res = B - A; cout << "B - A = " << res << endl;  key = 0; }
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 51:
					{
						float x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						float x;
						cout << "Введите делитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что делим?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
							if (key == 49) {
								res = A / x; cout << "A / x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = B / x; cout << "B / x = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 53:
					{
						float x;
						cout << "Введите множитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что на что умножаем?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
							if (key == 49) {
								res = A * x; cout << "A * x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = x * B; cout << "x * B = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 54:
					{
						float x;
						x = B.square(A, B);
						cout << "Площадь = " << x << endl;
						_getch();
						break;
					}
					case 55:
					{
						if (A == B) cout << A << "==" << B << endl;
						else cout << A << "!=" << B << endl;
						_getch();
						break;
					}
					case 56:
					{
					repeat_float:
						cout << "1. Изменить значения вектора 1" << endl << "2. Изменить значения вектора 2" << endl;
						int x;
						x = get_key() - 48;
						if (x == 1)
						{

							cout << "Выберите элемент" << A << endl;
							x = get_key() - 48;
							if (x < A.Get_size() + 1)
							{
								float temp = A[x - 1];
								cout << "Введите новое значение" << endl;
								cin >> A[x - 1];
								cout << "предыдущее значение: " << temp << "изменено на " << A[x - 1] << endl;

							}
							else
							{
								cout << "Введеный индекс выходит за рамки вектора" << endl;
								_getch();
								goto repeat_float;
							}
						}
						else
						{
							if (x == 2)
							{
								cout << "Выберите элемент" << B << endl;
								x = get_key() - 48;
								if (x < B.Get_size() + 1)
								{
									float temp = B[x - 1];
									cout << "Введите новое значение" << endl;
									cin >> B[x - 1];
									cout << "предыдущее значение: " << temp << "изменено на " << B[x - 1] << endl;

								}
								else
								{
									cout << "Введеный индекс выходит за рамки вектора" << endl;
									_getch();
									goto repeat_float;
								}
							}
							else
							{
								cout << "У вас только два выбора! Красная или синия таблетка?" << endl;
								_getch();
								goto repeat_float;
							}
						}

						_getch();
						break;
					}
					case 27:
					{
						system("cls");
						break;
					}
					}
				}
				_getch();
				break;
			}
			case 52: 
			{
				Vector <complex<double>>A;
				Vector <complex<double>>B;
				cout << "Хорошо продолжим.." << endl;
				int key = 0;
				while (key != 27)
				{
					key = get_key();
					menu_2();
					switch (key)
					{
					case 49:
					{
						Vector<complex<double>> b;
						B = b;
						cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "Давайте заполгним наши векторы" << endl << "Введите размерность первого вектора" << endl;
						int size_one, size_two;
						complex<double> epsilon;
						cin >> size_one;
						cout << "А теперь введем размерность 2 вектора" << endl;
						cin >> size_two;
						cout << "Замечательно, а теперь введите число сравнения" << endl;
						cin >> epsilon;
						cout << "Самое время заполнить вектора" << endl;
						Vector <complex<double>>a(size_one, epsilon);
						cout << endl << "Остался последний вектор" << endl;
						Vector < complex<double>>b(size_two, epsilon);
						A = a;
						B = b;
						cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto Par;
						_getch();
						key = 27;
						break;
					}
					case 51:
					{
						system("cls");
						cout << "1. Создать два моих собственных вектора" << endl << "2. Создать два одинаковых и рандомных вектора" << endl;
						key = get_key();
						switch (key)
						{
						case 49:
						{
							complex<double> epsilon;
							cout << "Давайте заполгним наши векторы" << endl << "Введите размерность векторов" << endl;
							cin >> size;
							cout << "Замечательно, а теперь введите число сравнения" << endl;
							cin >> epsilon;
							cout << "Самое время заполнить вектора" << endl;
							Vector <complex<double>>a(size, epsilon);
							A = a;
							B = a;
							cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto My_copy;
							_getch();
							key = 27;
							break;
						}
						case 50:
						{
							B = A;
							cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto random_copy;
							_getch();
							key = 27;
							break;
						}
						}
						_getch();
						break;
					}
					}

				}//
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "Вектор А: " << A << endl << "Вектор В: " << B << endl;
					key = get_key();
					Vector <complex<double>>res;
					switch (key)
					{
					case 49:
					{
						res = A + B;
						cout << "A + B = " << res << endl;
						_getch();
						break;
					}
					case 50:
					{
						while (key != 0) {
							cout << "Шо вычитаем?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
							if (key == 49) { res = A - B; cout << "A - B = " << res << endl; key = 0; }

							else {
								if (key == 50) { res = B - A; cout << "B - A = " << res << endl;  key = 0; }
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 51:
					{
						complex<double> x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						complex<double> x;
						cout << "Введите делитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что делим?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
							if (key == 49) {
								res = A / x; cout << "A / x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = B / x; cout << "B / x = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 53:
					{
						complex<double> x;
						cout << "Введите множитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что на что умножаем?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
							if (key == 49) {
								res = A * x; cout << "A * x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = x * B; cout << "x * B = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 54:
					{
						complex<double> x;
						x = B.square(A, B);
						cout << "Площадь = " << x << endl;
						_getch();
						break;
					}
					case 56:
					{
					repeat_complex_double:
						cout << "1. Изменить значения вектора 1" << endl << "2. Изменить значения вектора 2" << endl;
						int x;
						x = get_key() - 48;
						if (x == 1)
						{

							cout << "Выберите элемент" << A << endl;
							x = get_key() - 48;
							if (x < A.Get_size() + 1)
							{
								double real;
								double image;
								complex<double> temp = A[x - 1];
								cout << "Введите новое значение действительной части" << endl;
								cin >> real;
								cout << "Введите новое значение мнимой части" << endl;
								cin>> image;
								A[x - 1]= complex<double>(real,image);
								cout << "предыдущее значение: " << temp << "изменено на " << A[x - 1] << endl;

							}
							else
							{
								cout << "Введеный индекс выходит за рамки вектора" << endl;
								_getch();
								goto repeat_complex_double;
							}
						}
						else
						{
							if (x == 2)
							{
								cout << "Выберите элемент" << B << endl;
								x = get_key() - 48;
								if (x < B.Get_size() + 1)
								{
									double real;
									double image;
									complex<double> temp = B[x - 1];
									cout << "Введите новое значение действительной части" << endl;
									cin >> real;
									cout << "Введите новое значение мнимой части" << endl;
									cin >> image;
									B[x - 1] = complex<double>(real, image);
									cout << "предыдущее значение: " << temp << "изменено на " << B[x - 1] << endl;
								}
								else
								{
									cout << "Введеный индекс выходит за рамки вектора" << endl;
									_getch();
									goto repeat_complex_double;
								}
							}
							else
							{
								cout << "У вас только два выбора! Красная или синия таблетка?" << endl;
								_getch();
								goto repeat_complex_double;
							}
						}

						_getch();
						break;
					}
					case 27:
					{
						system("cls");
						break;
					}
					}
				}
				_getch();
				break;
			}
			case 53: 
			{
				Vector <complex<float>>A;
				Vector <complex<float>>B;
				cout << "Хорошо продолжим.." << endl;
				int key = 0;
				while (key != 27)
				{
					key = get_key();
					menu_2();
					switch (key)
					{
					case 49:
					{
						Vector<complex<float>> b;
						B = b;
						cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "Давайте заполгним наши векторы" << endl << "Введите размерность первого вектора" << endl;
						int size_one, size_two;
						complex<float> epsilon;
						cin >> size_one;
						cout << "А теперь введем размерность 2 вектора" << endl;
						cin >> size_two;
						cout << "Замечательно, а теперь введите точность сравнения" << endl;
						cin >> epsilon;
						cout << "Самое время заполнить вектора" << endl;
						Vector <complex<float>>a(size_one, epsilon);
						cout << endl << "Остался последний вектор" << endl;
						Vector < complex<float>>b(size_two, epsilon);
						A = a;
						B = b;
						cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

						//goto Par;
						_getch();
						key = 27;
						break;
					}
					case 51:
					{
						system("cls");
						cout << "1. Создать два моих собственных вектора" << endl << "2. Создать два одинаковых и рандомных вектора" << endl;
						key = get_key();
						switch (key)
						{
						case 49:
						{
							complex<float> epsilon;
							cout << "Давайте заполгним наши векторы" << endl << "Введите размерность векторов" << endl;
							cin >> size;
							cout << "Замечательно, а теперь введите точность сравнения" << endl;
							cin >> epsilon;
							cout << "Самое время заполнить вектора" << endl;
							Vector <complex<float>>a(size, epsilon);
							A = a;
							B = a;
							cout << "Готово, вы справились с этим" << endl << "Вы только поглядите какие они красивые :)" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto My_copy;
							_getch();
							key = 27;
							break;
						}
						case 50:
						{
							B = A;
							cout << "Ваши рандомные вектора" << endl << "Вектор А: " << A << endl << "Вектор В: " << B << endl;

							//goto random_copy;
							_getch();
							key = 27;
							break;
						}
						}
						_getch();
						break;
					}
					}

				}
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "Вектор А: " << A << endl << "Вектор В: " << B << endl;
					key = get_key();
					Vector <complex<float>>res;
					switch (key)
					{
					case 49:
					{
						res = A + B;
						cout << "A + B = " << res << endl;
						_getch();
						break;
					}
					case 50:
					{
						while (key != 0) {
							cout << "Шо вычитаем?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
							if (key == 49) { res = A - B; cout << "A - B = " << res << endl; key = 0; }

							else {
								if (key == 50) { res = B - A; cout << "B - A = " << res << endl;  key = 0; }
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 51:
					{
						complex<float> x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						complex<float> x;
						cout << "Введите делитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что делим?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
							if (key == 49) {
								res = A / x; cout << "A / x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = B / x; cout << "B / x = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 53:
					{
						complex<float> x;
						cout << "Введите множитель" << endl;
						cin >> x;
						while (key != 0) {
							cout << "Что на что умножаем?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
							if (key == 49) {
								res = A * x; cout << "A * x = " << res << endl; key = 0;
							}

							else {
								if (key == 50) {
									res = x * B; cout << "x * B = " << res << endl; key = 0;
								}
								else { cout << "тут только два выбора! :)" << endl; }
							}
						}
						_getch();
						break;
					}
					case 54:
					{
						complex<float> x;
						x = B.square(A, B);
						cout << "Площадь = " << x << endl;
						_getch();
						break;
					}
					case 56:
					{
					repeat_complex_float:
						cout << "1. Изменить значения вектора 1" << endl << "2. Изменить значения вектора 2" << endl;
						int x;
						x = get_key() - 48;
						if (x == 1)
						{

							cout << "Выберите элемент" << A << endl;
							x = get_key() - 48;
							if (x < A.Get_size() + 1)
							{
								float real;
								float image;
								complex <float> temp = A[x - 1];
								cout << "Введите новое значение действительной части" << endl;
								cin >> real;
								cout << "Введите новое значение мнимой части" << endl;
								cin >> image;
								A[x - 1] = complex<float>(real, image);
								cout << "предыдущее значение: " << temp << "изменено на " << A[x - 1] << endl;

							}
							else
							{
								cout << "Введеный индекс выходит за рамки вектора" << endl;
								_getch();
								goto repeat_complex_float;
							}
						}
						else
						{
							if (x == 2)
							{
								cout << "Выберите элемент" << B << endl;
								x = get_key() - 48;
								if (x < B.Get_size() + 1)
								{
									float real;
									float image;
									complex<float> temp = B[x - 1];
									cout << "Введите новое значение действительной части" << endl;
									cin >> real;
									cout << "Введите новое значение мнимой части" << endl;
									cin >> image;
									B[x - 1] = complex<float>(real, image);
									cout << "предыдущее значение: " << temp << "изменено на " << B[x - 1] << endl;
								}
								else
								{
									cout << "Введеный индекс выходит за рамки вектора" << endl;
									_getch();
									goto repeat_complex_float;
								}
							}
							else
							{
								cout << "У вас только два выбора! Красная или синия таблетка?" << endl;
								_getch();
								goto repeat_complex_float;
							}
						}

						_getch();
						break;
					}
					case 27:
					{
						system("cls");
						break;
					}
					}
				}
				_getch();
				break;
			}
			}
		}
	}
		
	}
	catch (invalid_argument err)
	{
		cout << "invalid argument: " << err.what() << std::endl;
	}
	catch(out_of_range err)
	{
		cout << "Our of range " << err.what() << std::endl;
	}
	catch (logic_error err)
	{
		cout << "Logic error: " << err.what() << std::endl;
	}

}
