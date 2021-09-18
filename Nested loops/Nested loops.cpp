// Nested loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//#define TERNARY

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define DOWN_RIGHT_ANGLE	(char)217
#define VERT_LINE			(char)179
#define HORIZ_LINE			"\xC4\xC4"//(char)196
#define WHITE_BOX			"\xDB\xDB"//(char)219
#define BLACK_BOX			"  "
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер доски: "; cin >> n;
#ifdef TERNARY


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if (j % 2 == i % 2)cout << "+ ";
			//if ((i+j) % 2==0)cout << "+ "; else cout << "- ";
			//(i+j) % 2==0 ? cout << "+ " : cout << "- "; //тернарный оператор
			cout << char((i + j) % 2 == 0 ? '+' : '-');
		}
		cout << endl;
	}
#endif // TERNARY


	setlocale(LC_ALL, "C");
	++n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE;  // строка или нулевая или последняя
			else if (j == 0 || j == n) cout << VERT_LINE;   // символ или нулевой или последний
			else cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
				//(i+j)%2==0?cout << WHITE_BOX:cout<< BLACK_BOX;
		}
		cout << endl;
	}
	setlocale(LC_ALL, "rus");
	cout << "Вот и сказочке конец :-)" << endl;
}
