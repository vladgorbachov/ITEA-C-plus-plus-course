#include <iostream>

using namespace std;

int bin_pow(int num, int s = 0) {
	if (s == 0)return 1;
	if (s % 2)return num * bin_pow(num, s - 1);
	else {
		int temp(bin_pow(num, s / 2));
		return temp * temp;
	}
}

int main()
{
	int num = 0;
	int s = 0;
	cout << "Enter value: " << endl;
	cin >> num;
	cout << "Enter power value: " << endl;
	cin >> s;
	cout << "Your result: " << bin_pow(num, s);
	cout << endl;
	return 0;
}