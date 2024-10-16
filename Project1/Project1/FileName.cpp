#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    printf("Zadanie #1\n");
    string name_File;
    ofstream outFile("example.txt");
    cin >> name_File;
    string n;
    if (name_File == "example.txt") {
        if (outFile.is_open()) {
            for (int i = 0; i <= 3; i++) {
                cin >> n;
                outFile << n << " ";
            }
            outFile.close();
        }
        else {
            cout << "Unable to open file for writing" << endl;
        }
    }
    else {
        cout << "File ne naiden" << endl;
    }
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file for reading" << endl;
    }
    printf("Zadanie #2\n");

    return 0;
}