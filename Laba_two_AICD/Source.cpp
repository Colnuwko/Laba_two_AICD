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
	cout << "esc -  �����" << endl;
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
				cout << "������ ���������.." << endl;
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
						cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
						int size;
						int epsilon;
						cin >> size;
						cout << "������������, � ������ ������� ����� ���������" << endl;
						cin >> epsilon;
						cout << "����� ����� ��������� �������" << endl;
						Vector <int>a(size, epsilon);
						cout << endl << "������� ��������� ������" << endl;
						Vector <int>b(size, epsilon);
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
						key = get_key();
						switch (key)
						{
						case 49:
						{
							int epsilon;
							cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
							cin >> size;
							cout << "������������, � ������ ������� ����� ���������" << endl;
							cin >> epsilon;
							cout << "����� ����� ��������� �������" << endl;
							Vector <int>a(size, epsilon);
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

				}//
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "������ �: " << A << endl << "������ �: " << B << endl;
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
							cout << "�� ��������?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
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
						double x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						double x;
						cout << "������� ��������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �����?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
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
						double x;
						cout << "������� ���������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �� ��� ��������?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
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
						int x;
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
				cout << "������ ���������.." << endl;
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
						cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
						int size;
						double epsilon;
						cin >> size;
						cout << "������������, � ������ ������� ����� ���������" << endl;
						cin >> epsilon;
						cout << "����� ����� ��������� �������" << endl;
						Vector <double>a(size, epsilon);
						cout << endl << "������� ��������� ������" << endl;
						Vector <double>b(size, epsilon);
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
						key = get_key();
						switch (key)
						{
						case 49:
						{
							double epsilon;
							cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
							cin >> size;
							cout << "������������, � ������ ������� ����� ���������" << endl;
							cin >> epsilon;
							cout << "����� ����� ��������� �������" << endl;
							Vector <double>a(size, epsilon);
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

				}//
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "������ �: " << A << endl << "������ �: " << B << endl;
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
							cout << "�� ��������?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
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
						double x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						double x;
						cout << "������� ��������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �����?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
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
						double x;
						cout << "������� ���������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �� ��� ��������?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
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
						int x;
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
				cout << "������ ���������.." << endl;
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
						cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
						int size;
						float epsilon;
						cin >> size;
						cout << "������������, � ������ ������� ����� ���������" << endl;
						cin >> epsilon;
						cout << "����� ����� ��������� �������" << endl;
						Vector <float>a(size, epsilon);
						cout << endl << "������� ��������� ������" << endl;
						Vector <float>b(size, epsilon);
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
						key = get_key();
						switch (key)
						{
						case 49:
						{
							float epsilon;
							cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
							cin >> size;
							cout << "������������, � ������ ������� ����� ���������" << endl;
							cin >> epsilon;
							cout << "����� ����� ��������� �������" << endl;
							Vector <float>a(size, epsilon);
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
							cout << "�� ��������?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
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
						float x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						float x;
						cout << "������� ��������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �����?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
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
						float x;
						cout << "������� ���������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �� ��� ��������?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
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
						float x;
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
				cout << "������ ���������.." << endl;
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
						cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
						int size;
						complex<double> epsilon;
						cin >> size;
						cout << "������������, � ������ ������� ����� ���������" << endl;
						cin >> epsilon;
						cout << "����� ����� ��������� �������" << endl;
						Vector <complex<double>>a(size, epsilon);
						cout << endl << "������� ��������� ������" << endl;
						Vector < complex<double>>b(size, epsilon);
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
						key = get_key();
						switch (key)
						{
						case 49:
						{
							complex<double> epsilon;
							cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
							cin >> size;
							cout << "������������, � ������ ������� ����� ���������" << endl;
							cin >> epsilon;
							cout << "����� ����� ��������� �������" << endl;
							Vector <complex<double>>a(size, epsilon);
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

				}//
				key = 0;
				while (key != 27)
				{
					menu_3();
					cout << "������ �: " << A << endl << "������ �: " << B << endl;
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
							cout << "�� ��������?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
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
						complex<double> x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						complex<double> x;
						cout << "������� ��������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �����?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
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
						complex<double> x;
						cout << "������� ���������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �� ��� ��������?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
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
						complex<double> x;
						x = B.square(A, B);
						cout << "������� = " << x << endl;
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
				cout << "������ ���������.." << endl;
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
						cout << "���� ��������� �������" << endl << "������ �: " << A << endl << "������ �: " << B << endl;

						//goto random;
						_getch();
						key = 27;
						break;
					}
					case 50:
					{
						system("cls");
						cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
						int size;
						complex<float> epsilon;
						cin >> size;
						cout << "������������, � ������ ������� ����� ���������" << endl;
						cin >> epsilon;
						cout << "����� ����� ��������� �������" << endl;
						Vector <complex<float>>a(size, epsilon);
						cout << endl << "������� ��������� ������" << endl;
						Vector < complex<float>>b(size, epsilon);
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
						key = get_key();
						switch (key)
						{
						case 49:
						{
							complex<float> epsilon;
							cout << "������� ��������� ���� �������" << endl << "������� ����������� ��������" << endl;
							cin >> size;
							cout << "������������, � ������ ������� ����� ���������" << endl;
							cin >> epsilon;
							cout << "����� ����� ��������� �������" << endl;
							Vector <complex<float>>a(size, epsilon);
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
							cout << "�� ��������?" << endl << "1. A - B" << endl << "2. B - A" << endl;


							key = get_key();
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
						complex<float> x = A * B;
						cout << "A * B = " << x << endl;
						_getch();
						break;
					}
					case 52:
					{
						complex<float> x;
						cout << "������� ��������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �����?" << endl << "1. A / x" << endl << "2. B / x" << endl;


							key = get_key();
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
						complex<float> x;
						cout << "������� ���������" << endl;
						cin >> x;
						while (key != 0) {
							cout << "��� �� ��� ��������?" << endl << "1. A * x" << endl << "2. x * B" << endl;


							key = get_key();
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
						complex<float> x;
						x = B.square(A, B);
						cout << "������� = " << x << endl;
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
