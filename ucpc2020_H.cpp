#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;


int main(void) {
	int n;
	cin >> n;
	int* h = new int[n];
	int min = 10000;

	for (int i = 0; i < n; i++) {
		cin >> h[i];
		if (h[i]<=min&&h[i]>1) {
			min = h[i]; //0과 1을 제외한 최솟값
		}
	}

	if (min == 1) {
		for (int i = 0; i < n; i++) {
			if (h[i] % 3 != 0) {

			}
			else //전부 3의 배수
				cout << "YES";
		}

	}
	cout << min;

	return 0;
}