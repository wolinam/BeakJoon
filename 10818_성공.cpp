#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int min = 0;
	int max = 0;

	//�Է¹ޱ�
	int num = 0;
	cin >> num;
	int* list = new int[num + 1];
	for (int n = 0; n < num; n++) {
		cin >> list[n];
	}

	//�ּڰ��� ��ġ�� �ε��� ã��
	for (int j = 1; j < num; j++) {
		if (list[j] < list[min])
			min = j;
		else
			min = min;
	}

	//�ִ��� ��ġ�� �ε��� ã��
	for (int j = 1; j < num; j++) {
		if (list[j] > list[max])
			max = j;
		else
			max = max;
	}
	cout << list[min] << " " << list[max];

	return 0;
}



