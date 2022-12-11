#include <iostream>
#include <string>
#include <conio.h>
#include "Header.h"

using namespace std;
void menu_2()
{
	system("cls");
	cout << "1. ������� ��������� ������" << endl;
	cout << "2. ������� ������ � �����������" << endl;
	cout << "3. ������� ��� ���������� �������" << endl;


}
void menu()
{
	system("cls");
	cout << "�������� ��� ������" << endl;
	cout << "1. int" << endl;
	cout << "2. double" << endl;
	cout << "3. float" << endl;
	cout << "4. complex<double>" << endl;
	cout << "5. complex<float>" << endl;
}
void menu_3()
{
	system("cls");
	cout << "1. ������� �������" << endl;
	cout << "2. ������� �������" << endl;
	cout << "3. ����� ��������� ������������" << endl;
	cout << "4. ��������� ������ �� �����" << endl;
	cout << "5. �������� ������ �� �����" << endl;
	cout << "6. ��������� ������� ������������" << endl;
	cout << "7. �������� �������" << endl;
	cout << "8. �������� ������� �������" << endl;
	cout << "9. ����������� ������� �������" << endl;
	cout << "esc -  �����" << endl;
}
template <class T>
void Nomain()
{
	Vector <T>A;
	Vector <T>B;
	cout << "������ ���������.." << endl;
	int key = 0;
	while (key != 27)
	{ 
		menu_2();
		key = _getch();
		switch (key)
		{
		case 49:
		{
			Vector<T> b;
			B = b;
			cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

			//goto random;
			_getch();
			key = 27;
			break;
		}
		case 50:
		{
			system("cls");
			cout << "������� ��������� ���� �������" << endl << "������� ����������� ������� �������" << endl;
			int size_one;
			int size_two;
			double epsilon;
			cin >> size_one;
			cout << "� ������ ������ ����������� 2 �������" << endl;
			cin >> size_two;
			cout << "������������, � ������ ������� �������� ���������" << endl;
			cin >> epsilon;
			cout << "����� ����� ��������� �������" << endl;
			Vector <T>a(size_one, epsilon);
			cout << endl << "������� ��������� ������" << endl;
			Vector <T>b(size_two, epsilon);
			A = a;
			B = b;
			cout << "������, �� ���������� � ����" << endl << "�� ������ ��������� ����� ��� �������� :)" << endl << "������ �: " << A << endl << "������ �: " << B << endl;
			//goto Par;
			_getch();
			key = 27;
			break;
		}
		case 51:
		{
			system("cls");
			cout << "1. ������� ��� ���� ����������� �������" << endl << "2. ������� ��� ���������� � ��������� �������" << endl;
			key = _getch();
			switch (key)
			{
			case 49:
			{
				int size;
				int epsilon;
				cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
				cin >> size;
				cout << "������������, � ������ ������� �������� ���������" << endl;
				cin >> epsilon;
				cout << "����� ����� ��������� �������" << endl;
				Vector <T>a(size, epsilon);
				A = a;
				B = a;
				cout << "������, �� ���������� � ����" << endl << "�� ������ ��������� ����� ��� �������� :)" << endl << "������ �: " << A << endl << "������ �: " << B << endl;
				//goto My_copy;
				_getch();
				key = 27;
				break;
			}
			case 50:
			{
				B = A;
				cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

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
		cout << "������ �: " << A << endl << "������ �: " << B << endl;
		key = _getch();
		Vector <T>res;
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
				cout << "�� ��������?" << endl << "1. A - B" << endl << "2. B - A" << endl;


				key = _getch();
				if (key == 49) { res = A - B; cout << "A - B = " << res << endl; key = 0; }

				else {
					if (key == 50) { res = B - A; cout << "B - A = " << res << endl;  key = 0; }
					else { cout << "��� ������ ��� ������! :)" << endl; }
				}
			}
			_getch();
			break;
		}
		case 51:
		{
			T x = A * B;
			cout << "A * B = " << x << endl;
			_getch();
			break;
		}
		case 52:
		{
			T x;
			cout << "������� ��������" << endl;
			cin >> x;
			while (key != 0) {
				cout << "��� �����?" << endl << "1. A / x" << endl << "2. B / x" << endl;


				key = _getch();
				if (key == 49) {
					res = A / x; cout << "A / x = " << res << endl; key = 0;
				}

				else {
					if (key == 50) {
						res = B / x; cout << "B / x = " << res << endl; key = 0;
					}
					else { cout << "��� ������ ��� ������! :)" << endl; }
				}
			}
			_getch();
			break;
		}
		case 53:
		{
			T x;
			cout << "������� ���������" << endl;
			cin >> x;
			while (key != 0) {
				cout << "��� �� ��� ��������?" << endl << "1. A * x" << endl << "2. x * B" << endl;


				key = _getch();
				if (key == 49) {
					res = A * x; cout << "A * x = " << res << endl; key = 0;
				}

				else {
					if (key == 50) {
						res = x * B; cout << "x * B = " << res << endl; key = 0;
					}
					else { cout << "��� ������ ��� ������! :)" << endl; }
				}
			}
			_getch();
			break;
		}
		case 54:
		{
			T x;
			x = B.square(A, B);
			cout << "������� = " << x << endl;
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

			cout << "1. �������� �������� ������� 1" << endl << "2. �������� �������� ������� 2" << endl;
			int y;
			int x;
			y = _getch() - 48;
			if (y == 1)
			{
				cout << "�������� �������" << A << endl;
				cin >> x;
				T temp = A[x];
				cout << "������� ����� ��������" << endl;
				cin >> A[x];
				cout << "���������� ��������: " << temp << "�������� �� " << A[x] << endl;

			}
			else
			{
				if (y == 2)
				{
					cout << "�������� �������" << B << endl;
					cin >> x;
					T temp = B[x];
					cout << "������� ����� ��������" << endl;
					cin >> B[x];
					cout << "���������� ��������: " << temp << "�������� �� " << B[x] << endl;
				}
				else
				{
					cout << "� ��� ������ ��� ������! ������� ��� ����� ��������?" << endl;
					_getch();

				}
			}

			_getch();
			break;
		}
		case 57:
		{
			system("cls");
			cout << "1. ����������� �������� ������� 1" << endl << "2. ����������� �������� ������� 2" << endl;
			int x;
			cin >> x;
			if (x == 1)
			{
				cout << A << endl << "����� ����� �� ������ ���������??" << endl;
				cin >> x;
				cout << A[x];
				_getch();

			}
			else
			{
				if (x == 2)
				{
					cout << B << endl << "����� ����� �� ������ ���������??" << endl;
					cin >> x;
					cout << B[x];
					_getch();

				}
				else {
					cout << "� ��� ������ ��� ������! ������� ��� ����� ��������?" << endl;
					_getch();

				}
			}
		}
		case 27:
		{
			system("cls");
			break;
		}
		}
	}
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
	int key = 0;
	while (key != 27)
	{
		setlocale(LC_ALL, "Rus");
		int size;
		
		try
		{
			while(key!=27)
			{ 
			while (key != 27)
			{
				menu();
				key = get_key();
				switch (key)
				{
				case 49:
				{
					Nomain<int>();
					_getch();
					break;
				}

				case 50:
				{
					Nomain<double>();
					_getch();
					break;
				}
				case 51: 
				{
					Nomain<float>();
					_getch();
					break;
				}
				case 52: 
				{
					Nomain<complex<double>>();
					_getch();
					break;
				}
				case 53: 
				{
					Nomain<complex<float>>();
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
			_getch();
		}
		catch(out_of_range err)
		{
			cout << "Our of range " << err.what() << std::endl;
			_getch();
		}
		catch (logic_error err)
		{
			cout << "Logic error: " << err.what() << std::endl;
			_getch();
		}

	}
}
