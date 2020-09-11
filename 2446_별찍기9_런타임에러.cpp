#include <iostream>
#include <string.h>
using namespace std;

int main(void) {

	int num = 0; //5
	char star[101] = { NULL }; //배열크기는 데이터보다 하나 더 많게! 주의!
	cin >> num;
	int max = 2 * num - 1; //9
	string origin;

	for (int i = 0; i < 2 * num - 1; i++) {
			star[i] = '*';
	}
	origin = star;
	cout << star << endl;

	for (int i = 1; i < 2 * num - 1; i++) {
		if (i < num) {
			star[i - 1] = '\0';
			star[max - i] = '\0';
			cout << star << endl;
		}
		else if ((max - 1) == i) { //마지막에 엔터키 없애려고 따로 작성
			cout << origin;
		}
		else {
			//star[max - i] = NULL;
			//star[2] => **
			cout << star << endl;
		}
	}
	return 0;
}
