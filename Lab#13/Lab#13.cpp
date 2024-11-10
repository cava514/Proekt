#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student {
    char _familia[10];
    char _name[10];
    char _otchestvo[10];
};
int main() {
    printf("Zadanie#1\n");
    ofstream outFile("example.dat", ios::binary);
    string name_file;
    cout << "Imia file: ";
    getline(cin, name_file);
    if (name_file == "example.dat") {
        if (outFile.is_open()) {
            int data[5];
            for (int i{ 0 }; i < 5; i++) cin >> data[i];
            outFile.write(reinterpret_cast<char*>(data), sizeof(data));
            outFile.close();
        }
        else {
            std::cout << "Unable to open file for writing" << std::endl;
        }
    }
    else {
        cout << "Unable to open file for writing" << endl;
    }
    printf("Zadanie#2\n");
    ifstream inFile("example.dat", ios::binary);
    string name1_file;
    cout << "Imia file: ";
    cin >> name1_file;
    if (name1_file == "example.dat") {
        if (inFile.is_open()) {
            int value;
            int value_sum{0};
            for (int i{ 0 }; i < 5; i++) {
                inFile.seekg(i * sizeof(int), ios::beg);
                inFile.read(reinterpret_cast<char*>(&value), sizeof(value));
                value_sum += value;
                cout << "The third value is: " << value << endl;
            }
            cout << "The summ value is: " << value_sum << endl;
            inFile.close();
        }
        else {
            cout << "Unable to open file for reading" << endl;
        }
    }
    printf("Zadanie#3\n");
    ofstream outFile_struct("example_struct.dat", ios::binary);
    string name_file_struct;
    cout << "Imia file: ";
    cin >> name_file_struct;
    if (name_file_struct == "example_struct.dat") {
        if (outFile_struct.is_open()) {
            Student st;
            cin >> st._familia;
            cin >> st._name;
            cin >> st._otchestvo;
            outFile_struct.write(reinterpret_cast<char*>(&st), sizeof(Student));
            outFile_struct.close();
        }
        else {
            std::cout << "Unable to open file for writing" << std::endl;
        }
    }
    else {
        cout << "Unable to open file for writing" << endl;
    }
    printf("Zadanie#4\n");
    ifstream inFile_struct("example_struct.dat", ios::binary);
    string name1_file_struct;
    cout << "Imia file: ";
    cin >> name1_file_struct;
    if (name1_file_struct == "example_struct.dat") {
        if (inFile_struct.is_open()) {
            Student st;
            while (inFile_struct.read(reinterpret_cast<char*>(&st), sizeof(Student))){
                cout << "The third value is:\t" << st._familia << '\t' << st._name << '\t' << st._otchestvo << endl;
            }
            inFile_struct.close();
        }
        else {
            cout << "Unable to open file for reading" << endl;
        }
    }
    return 0;
}