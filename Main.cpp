#include <iostream>

using namespace std;



int Ffunction(int a);


int main()
{
	Ffunction(10);
}

int Ffunction(int a)
{
	if (a < 0)
	{
		cout << endl;
		return 0;
	}

	cout << a << ",";
	Ffunction(a - 1);


	return 0;
}
