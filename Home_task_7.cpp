
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	
	
	const int str = 4;
	const int col = 4;
	int arr[str][col];
	int i, j, a, c, e = 1, d = 10, temp, x, z; 

	cout << "Before sorting""\n\n";  // Filling array by random values (with rand() func);
	for (i = 0; i < str; i++)
	{
		for (j = 0; j < col; j++)
		{
			a = rand() % (d - e) + e;
			arr[i][j] = a;
			cout << arr[i][j] << "\t";
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
				if (arr[i][j] > arr[i][j + 1])
				{
					temp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = temp;
				}
			}
		}
		
		for (x = 0; x < col; x++)
		{
			for (z = 0; z < str - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					temp = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = temp;
				}
			}
		}
	}
	

	cout << "Array after sorting""\n\n";
	for (i = 0; i < str; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n\n";
	}
	
}