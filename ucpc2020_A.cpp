#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;


int main(void) {

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	int copy1 = 0, copy2 = 0, copy3 = 0;
	int x = 0, y = 0;
	int p = 0, q = 0;

	cin >> a >> b >> c >> d >> e >> f;
	copy1 = a;
	copy2 = b;
	copy3 = c;

	if (a == 0) {
		if (e == 0) {
			y = c / b;
			x = f / d;
		}
		else {
			y = c / b;
			x = (f - y * e) / d;
		}
	}
	else if (d == 0) {
		if (b == 0) {
			y = f / e;
			x = c / a;
		}
		else {
			y = f / e;
			x = (c - y * b) / a;
		}
	}
	else {
		a = a * d;
		b = b * d;
		c = c * d;
		d = d * copy1;
		e = e * copy1;
		f = f * copy1;

		p = b - e;
		q = c - f;
		if (p != 0)
			y = q / p; //y

		x = (copy3 - y * copy2) / copy1; //x
	}

	cout << x << " " << y << endl;
	//printf("%d %d", x,y);

	return 0;
}