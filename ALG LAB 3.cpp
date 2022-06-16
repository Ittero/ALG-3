#include "Stack.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	stack stc;
	int q;
	stc.fill();
	while (true)
	{
		stc.empty();
		cout << "1) - POP " << endl
			<< "2) - TOP" << endl
			<< "3) - PUSH " << endl
			<< "4) - PRINT" << endl
			<< "5) - MAKENULL" << endl
			<< "Виберіть дію - ";
		cin >> q;
		switch (q)
		{
		case 1:
			stc.POP();
			break;
		case 2:
			stc.TOP();
			break;
		case 3:
			stc.PUSH();
			break;
		case 4:
			stc.PRINT();
			break;
		case 5:
			stc.MAKENULL();
			break;
		default:
			cout << "Ви ввели невірні дані!" << endl;
			break;
		}
	}
}
