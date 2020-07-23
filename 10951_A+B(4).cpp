#include <iostream>
using namespace std;

int main(void) {
	int a = 0, b = 0;

	while (cin >> a >> b)
	{
		if ((0 >= a || a > 9) || (0 >= b || b > 9)) 
			break;
		cout << a+b<<endl;
	}
	return 0;
}