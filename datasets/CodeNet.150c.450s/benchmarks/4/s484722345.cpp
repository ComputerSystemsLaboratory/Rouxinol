#include <iostream>
using namespace std;

char grade(int, int, int);

char grade(int m, int f, int r){
    if(m == -1 || f == -1) return 'F';
    int sum = m + f;
    if(sum < 30) return 'F';
    if(30 <= sum && sum < 50) return (50 <= r)? 'C':'D';
    if(50 <= sum && sum < 65) return 'C';
    if(65 <= sum && sum < 80) return 'B';
    
    return 'A';
}

int main(void){
    int m, f, r;
    while(true){
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r ==-1) break;
        cout << grade(m, f, r) << endl;
    }
}