#include<iostream>
using namespace std;


//#define ASCII // ������� ����
//#define TERNARY //��������� ��������
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define DOWN_RIGHT_ANGLE	(char)217
#define VERT_LINE			(char)179
#define HORIZ_LINE			"\xC4\xC4"//(char)196
#define WHITE_BOX			"\xDB\xDB"//(char)219
#define BLACK_BOX "  "
#define CHESS BOARD //��������� �����
int main()
{
	setlocale(LC_ALL, "rus");
#ifdef ASCII	
	cout << "ASCII-�������\n";
	setlocale(LC_ALL, "C"); // ���������� ��������� ��
	for (int i = 0; i < 256; i++)
		{	
			if (i%16 ==0)

			cout << endl;
			cout << (char)i<<" ";	

		}


#endif // ASCII
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl; // ASCII �������
	int n;
	cout << "������� ������ �����: "; cin >> n;
#ifdef TERNARY
for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << " *"; //����� �������� � ������
			//if (j % 2 == i%2) cout << "+ "; //������� ������ +
			//if ((i+j) % 2 /*== 0*/)  cout << "+ "; /*������� ������ + , ��� ��������� � ����� ��������� � �������(== 0)*/ else cout << "- ";
			//(i+j) % 2 /*== 0*/ ? cout << "+ ": cout << "- "; // ��������� �������� ?:
			cout << char((i + j) % 2 == 0 ? '+' : '-') << " ";

		}
		cout << endl;
	}
#endif // TERNARY
#ifdef CHESS BOARD



setlocale(LC_ALL, "C"); // ���������� ��������� ��
n++; // ����� ������ ���� �����, � �� �� ���� ������
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE; // ���� ������ � ������� � ������� � ������� ������� ��������� ������ ������� ����
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;// ���� ������ � ������� ������� � ������� � ��������� ��������� ����� ������� ����
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;//���� ������ � ������ ������� � ������� � ������� ��������� ������ ����� ����
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;//���� ������ � ������ ������� � ������� � ��������� ��������� ������ ������ ����
			else if (i == 0 || i == n)cout << HORIZ_LINE;//���� ������ � � ������� ��� � ������ ��������� �������������� �����
			else if (j == n || j == 0)cout << VERT_LINE;//���� �������� � ������� ��� � ��������� ������� ��������� �������������� �����
			else cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);// ���� ����� ������� ������ � ������� �������� �� 2 ��� ������� ���������� ����� ������� ����� ������ �������
				//(i+j)%2==0 ? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
#endif // CHESS BOARD	cout << endl;
	system("pause");
	return 0;
}