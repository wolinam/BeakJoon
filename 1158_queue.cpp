#include <iostream>
#include <queue>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	queue <int> q;
	int cnt = 0;

	for (int i = 1; i <= n; i++) { //차례대로 입력
		q.push(i);
	}

	// 출력
	cout << '<';
	while (cnt < n) {
		int num;
		for (int i = 0; i < k; i++){ //k개 마다 수행
			num = q.front(); //deque하는 값 num에 저장
			q.pop(); //꺼냄
			if (cnt < n-1 && i == k-1) //만약 해당 인덱스라면 출력. 꺼내고 끝. 다시 넣지 않음
				cout << num << ", ";
			else if (cnt == n - 1 && i == k-1)
				cout << num << '>';
			else //아니면 다시 넣기
				q.push(num);
		}
		cnt++;
	}
}
