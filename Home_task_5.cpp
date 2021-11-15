#include <iostream>
using namespace std;
int main()
{
	int size, n, i, j, max;
	cout << "Please enter the size of array: ";
	cin >> size;
	int* a = new int[size];
	int* k = new int[size];
	max = 0;
	for (i = 0; i < size; i++)
	{
		cout << "Enter " << i << " element: ";
		cin >> a[i];
	}
	for (i = 0; i < size; i++)
	{
		k[i] = 0;
		for (j = 1 + i; j < size; j++)
		{
			if (a[i] == a[j]) k[i] = k[i] + 1;
		}
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		if (k[i] > max) max = k[i];
	}
	max = max + 1;
	cout << "Max sequence: " << max;
	return 0;
}