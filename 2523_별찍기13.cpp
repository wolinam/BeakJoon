#include <iostream>
using namespace std;

int main(void) {

	int num = 0; //3
	char star[101] = { NULL }; //배열크기는 데이터보다 하나 더 많게! 주의!
	cin >> num;
	int max = 2 * num - 1; //5

	for (int i = 0; i < 2 * num - 1; i++) {
		if (i < num) {
			star[i] = '*';
			//star[0] => *
			//star[1] => **
			//star[2] => ***
			cout << star << endl;
		}
		else if((max-i)==1){ //마지막에 엔터키 없애려고 따로 작성
			star[max - i] = NULL;
			cout << star;
			//star[1] => *
		}
		else {
			star[max - i] = NULL;
			//star[2] => **
			cout << star << endl;
		}
	}

	return 0;
}