#include"CHER.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cher W;
	int f;
	srand(time(0));
	W.mass();
	while (true)
	{
		W.empty();
		cout << "1) -  MAKENULL" << endl
			<< "2) - FRONT" << endl
			<< "3) - ENQUEUE" << endl
			<< "4) - DEQUEUE" << endl
			<< "5) - PRINT" << endl
			<< "Ваш вибір -  ";
		cin >> f;
		switch (f)
		{
		case 1:
			W.MAKENULL();
			break;
		case 2:
			W.FRONT();
			break;
		case 3:
			W.ENQUEUE();
			break;
		case 4:
			W.DEQUEUE();
			break;
		case 0:
			W.PRINT();
			break;
		default:
			cout << "Невірні дані!" << endl;
		}
	}
}