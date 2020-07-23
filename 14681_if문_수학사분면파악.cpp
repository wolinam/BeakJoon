#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int a, b,c;
	cin >> a >> b;
	if (a > 0 && b > 0)
		 c = 1;
	else if (a > 0 && b < 0)
		c = 4;
	else if (a < 0 && b>0)
		c = 2;
	else
		c = 3;
	cout << c;
}
