#include <iostream>
using namespace std;

int main(void) {
	int a = 0, b = 0, one = 0 , two = 0;
	int cycle = 0;
	int copy = 0;
	cin >> a;
	copy = a;

	one = a / 10;
	two = a % 10;
	b = one + two;
	if (b > 9) b -= 10;

	a = 10 * two + b;
	cycle++;

	while (copy!=a)
	{
		one = a / 10;
		two = a % 10;
		b = one + two;
		if (b > 9) b -= 10;
		
		a = 10 * two + b;
		cycle++;
	}
	cout << cycle;
	return 0;
}