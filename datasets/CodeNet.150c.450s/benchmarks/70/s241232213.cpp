#include <iostream>
#include <string>
using namespace std;
int main() {
    int dates[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
 
    int m,d;
    while (cin >> m >> d && m != 0 || d != 0) {
        int day = 2;
        for (int i=0; i<m-1; ++i) {
            day = (day + dates[i]) % 7;
        }
        day = (day + d) % 7;
 
        cout << days[day] << endl;
    }
}