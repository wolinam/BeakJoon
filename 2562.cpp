#include <iostream>
using namespace std;

int main(){
	int ary[10]={0};
	int result = 0;
	int index = 0;

	for(int i =0;i<10;i++){
		cin >> ary[i];
	}

	for(int i =0;i<9;i++){
		if(ary[i]>=result){
			result = ary[i];
			index = i+1;
		}
	}
	printf("%d\n%d",result,index);
	
	
}