#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    printf("Zadanie#1\n");
    string file_name;
    cout << "Imia file: ";
    getline(cin, file_name);
    file_name += ".txt";
    if (file_name == "example.txt") {
        cout << "File naiden" << endl;
    }
    else {
        cout << "File ne naiden" << endl;
    }
    printf("Zadanie#2\n");
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, World!" << endl;
        outFile << "C++ File Handling" << endl;
        outFile.close();
    }
    cout << "Imia file: ";
    getline(cin, file_name);
    file_name += ".txt";
    if (file_name == "example.txt") {
        cout << "File naiden" << endl;
        ifstream inFile("example.txt");
        string line;
        if (inFile.is_open()) {
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        }
    }
    else {
        cout << "File ne naiden" << endl;
    }
    printf("Zadanie#3\n");
    ofstream OutFile("1.txt");
    ifstream InFile("1.txt");
    string line;
    string text;
    if (OutFile.is_open()) {
        OutFile << "Hello, World!" << endl;
        OutFile << "C++ File Handling" << endl;
        OutFile.close();
    }
    if (InFile.is_open()) {
        while (getline(InFile, line)) {
            cout << line << endl;
            text += line;
        }
        InFile.close();
    }
    string simvol;
    cout << "Vvedite simvol: ";
    getline(cin, simvol);
    unsigned count{};
    for (unsigned i{}; i <= text.length() - simvol.length(); ) {
        size_t position = text.find(simvol, i);
        if (position == string::npos) break;
        count++;
        i = position + 1;
    }
    cout << "Kolichestvo vhozhdeniy: " << count << endl;
    return 0;
}
