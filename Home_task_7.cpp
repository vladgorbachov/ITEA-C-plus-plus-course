
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	
	
	const int str = 5;
	const int col = 5;
	int mass[str][col];
	int i, j, a, c, e = 1, d = 100, temp, x, z; // Filling array by random values (with rand() func);

	cout << "Before sorting""\n\n";
	for (i = 0; i < str; i++)
	{
		for (j = 0; j < col; j++)
		{
			a = rand() % (d - e) + e;
			mass[i][j] = a;
			cout << mass[i][j] << "\t";
		}
		cout << "\n\n";
	}
	cout << "\n\n";
	
	for (c = 0; c <= (str * col); c++)
	{
		
		for (i = 0; i < str; i++)
		{
			for (j = 0; j < col - 1; j++)
			{
				if (mass[i][j] > mass[i][j + 1])
				{
					temp = mass[i][j];
					mass[i][j] = mass[i][j + 1];
					mass[i][j + 1] = temp;
				}
			}
		}
		
		for (x = 0; x < col; x++)
		{
			for (z = 0; z < str - 1; z++)
			{
				if (mass[z][x] > mass[z][x + 1])
				{
					temp = mass[z][x];
					mass[z][x] = mass[z][x + 1];
					mass[z][x + 1] = temp;
				}
			}
		}
	}
	

	cout << "Array after sorting""\n\n";
	for (i = 0; i < str; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << mass[i][j] << "\t";
		}
		cout << "\n\n";
	}
	
}