#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;


int main(void) {

	int n;
	cin >> n;
	int liarnum;
	int* result = new int[n];

	cin >> liarnum; //최초유포자 수
	int* liar = new int[liarnum]; //최초유포자
	for (int i = 0; i < liarnum; i++) { //최초유포자는 0분
		cin >> liar[i];
		result[liar[i] - 1] = 0;
	}
	return 0;
}