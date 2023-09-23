#include<iostream>
using namespace std;
int main(void) {
    while(1) {
        // ???????????????????????????
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) break;
        // ?????°????¨????
        int result = 0;
        if (m != -1)
            result += m;
        if (f != -1)
            result += f;
        // ???????????¨???
        char grade;
        if (result < 30 || m == -1 || f == -1)
            grade = 'F';
        else if (result < 50 && r < 50)
            grade = 'D';
        else if (result < 65 || r >= 50)
            grade = 'C';
        else if (result < 80)
            grade = 'B';
        else
            grade = 'A';
        cout << grade << endl;
    }
}