#include<iostream>
using namespace std;

int ismax(int num1, int num2, int num3)
{
	if (num1 >= num2 && num1 >= num3)
	{
		cout << "\nThe number " << num1 << " is greater ";
		return 0;
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		cout << "\nThe number " << num2 << " is greater ";
	}
	else
	{
		cout << "\nThe number " << num3 << " is greater ";
	}
}

int main()
{
	int num1, num2, num3;
	cout << "Finding maximum number from the given number ):";
	cout << "\nEnter number 1 : ";
	cin >> num1;
	cout << "\nEnter number 2 : ";
	cin >> num2;
	cout << "\nEnter number 3 : ";
	cin >> num3;

	int maxNUM = ismax(num1, num2, num3);

}