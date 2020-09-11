#include <iostream>
using namespace std;

int main(void) {

	int hamburger1, hamburger2, hamburger3;
	int coke, cider;
	int minham = 0, mindrink = 0;
	int price = 0;

	cin >> hamburger1 >> hamburger2 >> hamburger3 >> coke >> cider;
	hamburger1 < hamburger2 ? (hamburger1 < hamburger3 ? (minham = hamburger1) : (minham = hamburger3)) : (hamburger2 < hamburger3 ? (minham = hamburger2) : (minham = hamburger3));
	
	if ((coke - cider) < 0)
		mindrink = coke;
	else
		mindrink = cider;

	price = mindrink + minham - 50;
	cout << price;

	return 0;
}