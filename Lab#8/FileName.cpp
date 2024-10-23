#include <iostream>
using namespace std;
int del(double a, double b) {//Zadanie#1
	if (b == 0) {
		return 0;
	}
	else {
		return a / b;
	}
}
int plosh(double a1) {//Zadanie#2
	return a1 * a1;
}
int plosh(double a2, double b2) {//Zadanie#2
	return a2 * b2;
}
int step(double a3, int x) {//Zadanie#3
	if (x>-1) {
		double a3_1{ 1 };
		for (auto i{ 0 }; i < x; i++) {
			a3_1 *= a3;
		}
		return a3_1;
	}
}
int stepen(double a4, int x_1) {//Zadanie#4
	int a4_1{1};
	if(x_1 == 0) {
		return 1;
	}
	else {
		for (auto j{ 0 }; j < x_1; j++) {
			a4_1 *= a4;
		}
		return a4_1;
	}
}
int main() {
	printf("Zadanie#1\n");
	cout << del(10, 2.5) << endl;
	printf("Zadanie#2\n");
	cout << plosh(5) << endl;
	cout << plosh(5, 6) << endl;
	printf("Zadanie#3\n");
	cout << step(3, 3) << endl;
	printf("Zadanie#4\n");
	cout << stepen(2, 4) << endl;
	return 0;
}
