#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum << "\n";
	return 0;
}