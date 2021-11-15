#include <iostream>

using namespace std;

int main()
{
	int n, m;
	string st, std;
	cout << "Please enter your string: " << endl;
	cin >> st;

	for (n = 0; n < st.size(); n++) {
		if (st[n] == st[n + 1]) {
			st.erase(n, 1);
		}
	}
	std = st;
	for (n = 0; n < st.size(); n++) {
		for (m = n + 1; m < std.size() + 1; m++) {
			if (st[n] == std[m]) {
				std.erase(m, 1);
			}
		}
	}
	cout << "Correct string: " << std;
}

