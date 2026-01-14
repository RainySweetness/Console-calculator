#include <iostream>
using namespace std;

int main()
{
	int A, B, choose1;
	double res;
	char choose2;
	bool off = false;

	cout << "Welcome!";

	while (off == false)
	{
		cout << "Enter A";
		cin >> A;
		cout << "Enter B";
		cin >> B;
		cout << "Choose opperation:\n1) +;\n2) -;\n3) *;\n4) /.";
		cin >> choose1;
		switch (choose1)
		{
		case 1: 
			res = A + B;
			break;
		case 2:
			res = A - B;
			break;
		case 3:
			res = A * B;
			break;
		case 4:
			res = A / B;
			break;
		default:
			cout << "error";
			break;
		}
		cout << "Result = " << res;
		cout << "Try again? (y/n)";
		cin >> choose2;
		if ((choose2 == 'n') || (choose2 == 'N'))
		{
			off = true;
		}
	}


	return 0;
}
