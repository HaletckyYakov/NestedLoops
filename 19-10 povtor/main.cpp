#include<iostream>
using namespace std;


//#define ASCII // “аблица аски
//#define TERNARY //“ернарный оператор
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define DOWN_RIGHT_ANGLE	(char)217
#define VERT_LINE			(char)179
#define HORIZ_LINE			"\xC4\xC4"//(char)196
#define WHITE_BOX			"\xDB\xDB"//(char)219
#define BLACK_BOX "  "
#define CHESS BOARD //Ўахматна€ доска
int main()
{
	setlocale(LC_ALL, "rus");
#ifdef ASCII	
	cout << "ASCII-таблица\n";
	setlocale(LC_ALL, "C"); // ¬озвращает кодировку —»
	for (int i = 0; i < 256; i++)
		{	
			if (i%16 ==0)

			cout << endl;
			cout << (char)i<<" ";	

		}


#endif // ASCII
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl; // ASCII таблица
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
#ifdef TERNARY
for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << " *"; //¬ывод зведочки в строке
			//if (j % 2 == i%2) cout << "+ "; //”словие вывода +
			//if ((i+j) % 2 /*== 0*/)  cout << "+ "; /*”словие вывода + , при сравнении с нулем начнетьс€ с четного(== 0)*/ else cout << "- ";
			//(i+j) % 2 /*== 0*/ ? cout << "+ ": cout << "- "; // тернарный оператор ?:
			cout << char((i + j) % 2 == 0 ? '+' : '-') << " ";

		}
		cout << endl;
	}
#endif // TERNARY
#ifdef CHESS BOARD



setlocale(LC_ALL, "C"); // ¬озвращает кодировку —»
n++; // чтобы клеток было ровно, а не на одну меньше
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE; // ≈сли строка в нулевой и колонка в нулевой позиции выводитс€ правый верхний угол
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;// ≈сли строка в нулевой позиции и колонка в последней выводитс€ левый верхний угол
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;//≈сли строка в нижней позиции и колонка в нулевой выводитс€ нижний левый угол
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;//≈сли строка в нижней позиции и колонка в последней выводитс€ нижний правый угол
			else if (i == 0 || i == n)cout << HORIZ_LINE;//≈сли строка в в нулевой или в нижней выводитс€ горизонтальна€ лини€
			else if (j == n || j == 0)cout << VERT_LINE;//≈сли колокнка в нулевой или в последней позиции выводитс€ горизонтальна€ лини€
			else cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);// ≈сли сумма позиции строки и колонки делитьс€ на 2 без остатка выводитьс€ белый квадрат иначе черный квадрат
				//(i+j)%2==0 ? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
#endif // CHESS BOARD	cout << endl;
	system("pause");
	return 0;
}