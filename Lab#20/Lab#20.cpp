#include <iostream>
using namespace std;
class Time {
private:
    int _hours, _minutes, _seconds;
public:
    Time() {
        cout << "12:00:00" << endl;
    }
    Time(int hours, int minutes, int seconds) {
        if (hours > 0 && hours < 60 && minutes > 0 && minutes < 60 && seconds > 0 && seconds < 60) {
            this->_hours = hours;
            this->_minutes = minutes;
            this->_seconds = seconds;
            cout << _hours << ":" << _minutes << ":" << _seconds << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    Time(int seconds) {
        if (seconds >= 0) {
            this->_minutes = seconds / 60;
            this->_hours = _minutes / 60;
            this->_seconds = seconds % 60;
            if (_minutes >= 60) {
                this->_minutes -= (_minutes/60)*60;
            }
            if (_seconds >= 60) {
                this->_seconds -= 60;
                this->_minutes++;
            }
            if (_seconds < 10 || _minutes < 10 ) {
                if (_seconds < 10 && _minutes < 10) {
                    cout << _hours << ":" << "0" << _minutes << ":" << "0" << _seconds << endl;
                }
                else if (_minutes < 10) {
                    cout << _hours << ":" << "0" << _minutes << ":" << _seconds << endl;
                }
                else if (_seconds < 10) {
                    cout << _hours << ":" << _minutes << ":" << "0" << _seconds << endl;
                }
            }
        }
    }
    int operator[](unsigned int index) {
        switch (index)
        {
        case(0):
            return _hours;
        case(1):
            return _minutes;
        case(2):
            return _seconds;
        default:
            return -1;
        }
    }
    void Print() {
        cout << _hours << ":" << _minutes << ":" << _seconds << endl;
    }
    void GetFullSeconds() {
        cout << (_hours * 60 * 60) + (_minutes * 60) + _seconds << endl;
    }
};
int main()
{
    printf("Zadanie#1\n");
    Time t;
    Time ti(1,30,30);
    Time tim(12108);
    printf("Zadanie#2\n");
    tim.Print();
    ti.GetFullSeconds();
    cout << ti[0] << '\t' << ti[1] << '\t' << ti[2];
    printf("Zadanie#3\n");
    int hour, minut, second;
    Time time[1];
    cin >> hour;
    cin >> minut;
    cin >> second;
    Time time(hour, minut, second);
    return 0;
}