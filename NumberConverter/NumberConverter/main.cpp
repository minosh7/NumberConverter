#include <iostream>
#include <string>

using namespace std;


int power(int x, int z)
{
	int ans = 1;
	int i = 0;

	while (i < z)
	{
		ans = ans * x;
		i++;
	}
	return ans;
}

int binarytodecimal(const string &s)
{
		int finalans = 0;

		for (int i = size(s) - 1, j = 0; i >= 0 && j <= size(s); i--, j++) //iterate through the string
		{
				if (s[i] == '1') // on each iteration, if we come across a 1 in the string, we raise the 2^i of that position. 
				{
					finalans = finalans + power(2, j);
				}
				if (s[i] == '0')
				{
					finalans = finalans + 0;
				}
		}
		return finalans;
}

int main()
{
	char choice;
	bool repeat = true;

	while (repeat)
	{
		string s;
		cout << " " << endl;
		cout << "Welcome to the Binary to Decimal Conveter. Your options to convert between numbers are given below:" << endl;
		cin >> s;
		binarytodecimal(s);
		int result = binarytodecimal(s);
		cout << " " << endl;
		cout << "Binary Number " << s << " to Decimal is: " << result << endl;

		while (true)
		{
			cout << " " << endl;
			cout << "Retry conversion? (Y/N): " << endl;
			cout << " " << endl;
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				break;
			}
			else if (choice == 'N' || choice == 'n')
			{
				repeat = false;
				break;
			}
			else
			{
				cout << "Error. Please try again." << endl;
			}
		}
	}

	return 0;
}