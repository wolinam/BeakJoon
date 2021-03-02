#include <iostream>
#include <queue>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	queue <int> q;
	int cnt = 0;

	for (int i = 1; i <= n; i++) { //���ʴ�� �Է�
		q.push(i);
	}

	// ���
	cout << '<';
	while (cnt < n) {
		int num;
		for (int i = 0; i < k; i++){ //k�� ���� ����
			num = q.front(); //deque�ϴ� �� num�� ����
			q.pop(); //����
			if (cnt < n-1 && i == k-1) //���� �ش� �ε������ ���. ������ ��. �ٽ� ���� ����
				cout << num << ", ";
			else if (cnt == n - 1 && i == k-1)
				cout << num << '>';
			else //�ƴϸ� �ٽ� �ֱ�
				q.push(num);
		}
		cnt++;
	}
}
