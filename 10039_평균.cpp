#include <iostream>
using namespace std;

int main(void) {

	int avg = 0;
	int stu[5];
	for (int i = 0; i < 5; i++) {
		cin >> stu[i];

		if (stu[i] < 40)
			avg += 40;
		else
			avg += stu[i];
	}
	avg /= 5;
	cout << avg;

	return 0;
}