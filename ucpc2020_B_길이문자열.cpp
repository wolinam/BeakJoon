#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;


int main(void) {
	int n = 0;
	int len = 0;
	cin >> n;
	int* result = new int[n];
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[2];
		arr[i][0] = 0;
		arr[i][1] = 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
		result[i] = arr[i][0] * pow(10, arr[i][1]);
	}
	for (int i = 0; i < n; i++) {
		len = result[i] / 2;
		
		if (result[i] < 10) {
			//-2-4-6-8
			if (result[i] % 2 == 0) {
				for (int i = 1; i <= len; i++) {
					cout << "-" << (2 * i);
				}
				cout << endl;
			}

			//1-3-5-7-9
			else {
				cout << '1';
				for (int k = 1; k <= len; k++) {
					cout << "-" << ((2 * k) + 1);
				}
				cout << endl;
			}
		}
		if (9<result[i] < 21) {
			if (result[i] % 2 == 0) {
				for (int i = 1; i <= len; i++) {
					cout << "-" << (2 * i);
				}
				cout << endl;
			}

			//1-3-5-7-10-13
			else {
				cout << '1';
				for (int k = 1; k <= 3; k++) {
					cout << "-" << ((2 * k) + 1);
				}
				int j = 10;
				while (j <= result[i]) {
					cout << "-" << j;
					j += 3;
					if (j > result[i])
						break;
				}

			}
		}
				cout << endl;
		}/*
		else {
			if (result[i] % 2 == 1) {
				cout <<"1-3-5-7-10-13-16-..."<< endl;
			}
			else {
				cout << "-2-4-6-8-10-12-14-16..." << endl;
			}
		}
	}*/

	return 0;
}