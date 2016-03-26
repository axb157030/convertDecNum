// Programmed by: Amine Benelbar
// This progam multiplies matrices specificied by the user
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	int theBase;
	int quotient;
	int num_iterations = 0;
	int counter = 0;
	int remainder;
	char ch = 'y';
	vector <int> convertedNum;
	int x = 1;


	
	
		cout << " Please input an integer number you want to convert" << endl;
		cin >> num;
		quotient = num;
		cout << "In order to convert the number into an octal number input 8 " << endl;
		cout << "In order to convert the number into a binary number input 2 " << endl;
		cout << "In order to convert the number into a hexadecimal number input 16 " << endl;
		cin >> theBase;

		if (theBase == 16)
		{
			cout << hex << num << " ";
		}

		else
		{
			while (num != 0)
			{
				remainder = (num % theBase);
				convertedNum.push_back(remainder);
				num = (num / theBase);
				num_iterations++;
			}

			for (counter = (num_iterations - 1); counter >= 0; counter--)
			{

				cout << convertedNum[counter];
			}

			cout << endl;
		}





system("pause");


return 0;

}

