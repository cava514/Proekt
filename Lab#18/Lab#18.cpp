#include <iostream>
using namespace std;
int main()
{
    const int n{ 10 };
    int a[n];
    cout << "Massiv" << '\n';
    for (auto i{ 0 }; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
        cout << a[i] << "\t";
    }
    cout << endl;
    for (auto i{ 0 }; i < n; i++) {
        for (auto j{ 0 }; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int x{ a[j] };
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    cout << "Sortirovka massiva 1 sposob" << '\n';
    for (auto i{ 0 }; i < n; i++) {
        cout << a[i] << '\t';
    }
    cout << endl;
    cout << "Massiv(1)" << '\n';
    for (auto i{ 0 }; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
        cout << a[i] << "\t";
    }
    cout << endl;
    for (auto i{ 0 }; i < n; i++) {
        for (auto j{ 0 }; j < n; j++) {
            if (a[i] < a[j]) {
                int x_1{ a[i] };
                a[i] = a[j];
                a[j] = x_1;
            }
        }
    }
    cout << "Sortirovka massiva 2 sposob" << '\n';
    for (auto i{ 0 }; i < n; i++) {
        cout << a[i] << '\t';
    }
    cout << endl;
    cout << "Massiv(2)" << '\n';
    for (auto i{ 0 }; i < n; i++) {
        a[i] = rand() % (100 - 1 + 1) + 1;
        cout << a[i] << "\t";
    }
    cout << endl;
    for (auto i{ 0 }; i < n; i++) {
        for (auto j{ n }; j > 0; j--) {
            if (a[i] < a[j]) {
                int x_1{ a[i] };
                a[i] = a[j];
                a[j] = x_1;
            }
        }
    }
    cout << "Sortirovka massiva 3 sposob" << '\n';
    for (auto i{ 0 }; i < n; i++) {
        cout << a[i] << '\t';
    }
    return 0;
}