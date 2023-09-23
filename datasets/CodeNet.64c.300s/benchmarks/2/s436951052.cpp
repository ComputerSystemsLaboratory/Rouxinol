#include <iostream>
using namespace std;
int main() {
    int m, f, r;
    while(true){
        char result;
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1) break;
        else if(m == -1 || f == -1 || m + f < 30) result = 'F';
        else if(m + f >= 80) result = 'A';
        else if(m + f >= 65 && m + f < 80) result = 'B';
        else if(m + f >= 50 && m + f < 65) result = 'C';
        else if(m + f >= 30 && m + f < 50){
            if(r >= 50) result = 'C';
            else result = 'D';
        }
        else{
            continue;
        }
        cout << result << endl;
    }
    return 0;
}

