#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;


int main(void) {

	int n;
	cin >> n;
	int liarnum;
	int* result = new int[n];

	cin >> liarnum; //���������� ��
	int* liar = new int[liarnum]; //����������
	for (int i = 0; i < liarnum; i++) { //���������ڴ� 0��
		cin >> liar[i];
		result[liar[i] - 1] = 0;
	}
	return 0;
}