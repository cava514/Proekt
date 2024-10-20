#include <iostream>
using namespace std;
void del(double a, double b) {//Zadanie#1
	if (b == 0) {
		cout << 0 << endl;
	}
	else {
		cout << a / b << endl;
	}
}
void plosh(double a1) {//Zadanie#2
	cout << a1 * a1 << endl;
}
void plosh(double a2, double b2) {//Zadanie#2
	cout << a2 * b2 << endl;
}
void step(double a3, int x) {//Zadanie#3
	if (x>-1) {
		double a3_1{ 1 };
		for (auto i{ 0 }; i < x; i++) {
			a3_1 *= a3;
		}
		cout << a3_1 << endl;
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
	del(10, 2.5);
	printf("Zadanie#2\n");
	plosh(5);
	plosh(5, 6);
	printf("Zadanie#3\n");
	step(3, 3);
	printf("Zadanie#4\n");
	cout << stepen(2, 4) << endl;
	return 0;
}
