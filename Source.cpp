#include <iostream>
using namespace std;

int main()
{
	//1)
	{
		{
		int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; //true
		int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; //false
		double radii[10] = (3.2, 4.7}; //false
		int table[7] = { 2, , , 27, , 45, 39 }; //false
		char codes[] = { 'A', 'X', '1', '2', 's' }; //true
		int blanks[]; //false
		int collection[-20]; //true
		int hours[3] = 8, 12, 16; //false
	}
	//2)
	{
		int values[] = { 2, 6, 10, 14 };
		//What does each of the following display ?
		//a)
		cout << values[2]; //nothing because of the missing ";"
		//b)
			cout << ++values[0]; //0

		//c)
		cout << values[1]++; //2
		//d)
		x = 2;
		cout << values[++x]; // doesnt clarify what x is
		//e)
		cout << values[4]; //14
	}
	//3)
	{
		int data[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
		for (int i = 0; i < 10; i++)
		{
			cout << i;
		}
	}
	//4)
	{
		int a, b, c, d, e;
		cout << "Enter 5 Numbers: \n";
		cin >> a >> b >> c >> d >> e;

		int data[] = { a, b, c, d, e };
		for (int i = 0; i < 5; i++)
		{
			cout << e << d << c << b << a;
		}
	}
	//5)
	{
		int arr[10], n, i, max, min;
		cout << "Enter size of Array: \n";
		cin >> n;
		cout << "Enter amount of numbers of array: \n";
		for (i = 0; i < n; i++)
			cin >> arr[i];
		max = arr[0];
		for (i = 0; i < n; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		min = arr[0];
		for (i = 0; i < n; i++)
		{
			if (min > arr[i])
				min = arr[i];
		}
		cout << "Largest Number is: " << max << "\n";
		cout << "Smalest Number is: " << min;
		cout << endl;
	}
	//6)
	{
		int input(istream& in = cin)
		{
			int x;
			in >> x;
			return x;
		}

		int main()
		{
			int board[9][9]; //creates a 9*9 matrix or a 2d array.

			for (int i = 0; i < 9; i++)    //This loops on the rows.
			{
				for (int j = 0; j < 9; j++) //This loops on the columns
				{
					board[i][j] = input(); //you can also connect to the file
					//and place the name of your ifstream in the input after opening the file will
					//let you read from the file.
				}
			}

			for (int i = 0; i < 9; i++)    //This loops on the rows.
			{
				for (int j = 0; j < 9; j++) //This loops on the columns
				{
					cout << board[i][j] << "  ";
				}
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
	}
}