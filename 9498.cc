#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 90 && n<=100)
		cout << "A\n";
	else if (n >= 80)
		cout << "B\n";
	else if (n >= 70)
		cout << "C\n";
	else if (n >= 60)
		cout << "D\n";
	else
		cout << "F\n";

	return 0;
}