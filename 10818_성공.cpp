#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int min = 0;
	int max = 0;

	//입력받기
	int num = 0;
	cin >> num;
	int* list = new int[num + 1];
	for (int n = 0; n < num; n++) {
		cin >> list[n];
	}

	//최솟값이 위치한 인덱스 찾기
	for (int j = 1; j < num; j++) {
		if (list[j] < list[min])
			min = j;
		else
			min = min;
	}

	//최댓값이 위치한 인덱스 찾기
	for (int j = 1; j < num; j++) {
		if (list[j] > list[max])
			max = j;
		else
			max = max;
	}
	cout << list[min] << " " << list[max];

	return 0;
}



