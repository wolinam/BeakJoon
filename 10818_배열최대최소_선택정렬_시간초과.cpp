#include <iostream>
#include <stdio.h>
#define swap(x,y,temp)(temp=x,x=y,y=temp)
using namespace std;

//선택정렬
//배열과 배열의 크기
void selecSort(int list[], int s) {
	int least, temp;

	//마지막은 for문 돌릴 필요없이 자동 정렬됨. 그러므로 s번 할 필요X. s-1번 루프.
	for (int i = 0; i < s - 1; i++) {
		least = i;//현위치를 최소로 잡고 처음 위치부터 하나씩 이동
		//현재 위치 다음 것 부터 비교해서 최솟값 찾기
		for (int j = i + 1; j < s; j++) {
			if (list[j] < list[least])
				least = j;
		}
		//자기 자신이 최솟값이면 자리이동X. 그대로 있기
		if (i != least) {
			swap(list[i], list[least], temp);
		}
	}
}
int main() {

	//입력받기
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



	