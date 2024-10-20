#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
	printf("Zadanie #1\n");
	string str{"Hello, world!"};
	std::cout << str << endl;
	for (int i = str.length(); i >= 0; i--) {
		cout << str[i];
	}
	cout << endl;
	printf("Zadanie #2\n");
	string simvol;
	cout << "Vvedite simvol: ";
	getline(cin, simvol);
	unsigned count{};
	for (unsigned i{}; i <= str.length() - simvol.length(); ){
		size_t position = str.find(simvol, i);
		if (position == string::npos) break;
		count++;
		i = position + 1;
	}
	cout << "Kolichestvo vhozhdeniy: " << count << endl;
	printf("Zadanie #3\n");
	string registr;
	string str_1{ "Hello, world!" };
	string str_2;
	cout << "Vvedite registr: ";
	getline(cin, registr);
	if (registr == "Vverh") {
		for (int j{0}; j < str_1.length(); j++) {
			if (islower(str_1[j])) {
				str_2 += toupper(str_1[j]);
			}
			else if(isspace(str_1[j]) || ispunct(str_1[j])) {
				str_2 += str_1[j];
			}
			else {
				str_2 += str_1[j];
			}
		}
		cout << str_2 << endl;
	}
	else {
		for (int l{0}; l < str_1.length(); l++) {
			if (isupper(str_1[l])) {
				str_2 += tolower(str_1[l]);
			}
			else if (isspace(str_1[l]) || ispunct(str_1[l])) {
				str_2 += str_1[l];
			}
			else {
				str_2 += str_1[l];
			}
		}
		cout << str_2 << endl;
	}
	printf("Zadanie #4\n");
	string STR;
	getline(cin, STR);
	for (int g{ 0 }; g < STR.length(); g++) {
		if (ispunct(STR[g])) {
			STR = STR.replace(g, 1, "\n");
		}
		else if(isspace(STR[g])){
			STR = STR.replace(g, 1, "");
		}
		else {
		}
	}
	cout << STR;
	printf("Zadanie #5\n");
	string original_str{"Hello, world!"};
	string simvol_str, simvol_str_1;
	cout << original_str << " " << endl;
	cout << "Vvedite simbol zameni: ";
	getline(cin, simvol_str);
	cout << "Vvedite simbol dly zameni: ";
	getline(cin, simvol_str_1);
	for (int h{ 0 }; h < original_str.length(); h++) {
		if (simvol_str[0] == original_str[h]) {
			original_str = original_str.replace(h, 1, simvol_str_1);
		}
	}
	cout << "Zamena: "<< original_str << endl;
}