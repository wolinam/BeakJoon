#include <iostream>
#include <stdio.h>
#define swap(x,y,temp)(temp=x,x=y,y=temp)
using namespace std;

//��������
//�迭�� �迭�� ũ��
void selecSort(int list[], int s) {
	int least, temp;

	//�������� for�� ���� �ʿ���� �ڵ� ���ĵ�. �׷��Ƿ� s�� �� �ʿ�X. s-1�� ����.
	for (int i = 0; i < s - 1; i++) {
		least = i;//����ġ�� �ּҷ� ��� ó�� ��ġ���� �ϳ��� �̵�
		//���� ��ġ ���� �� ���� ���ؼ� �ּڰ� ã��
		for (int j = i + 1; j < s; j++) {
			if (list[j] < list[least])
				least = j;
		}
		//�ڱ� �ڽ��� �ּڰ��̸� �ڸ��̵�X. �״�� �ֱ�
		if (i != least) {
			swap(list[i], list[least], temp);
		}
	}
}
int main() {

	//�Է¹ޱ�
	int num = 0;
	cin >> num;
	int* list = new int[num+1];
	for (int n = 0; n < num; n++) {
		cin >> list[n];
	}
	selecSort(list, num);
	cout << list[0] << " " << list[num-1];

	return 0;
}



	