#include<iostream>
using namespace std;

int main(){
    int m,f,r;
    int sum;
    while(true){
        cin >> m >> f >> r;
        sum = m+f;
        if(m == -1 && f == -1 && r == -1) break;
        else if(m >= 0 && f >= 0){
            if(sum>=80) cout << "A" << endl;
            else if(sum>=65) cout << "B" << endl;
            else if(sum>=50) cout << "C" << endl;
            else if(sum>=30){
                if(r>=50)cout << "C" << endl;
                if(r<50)cout << "D" << endl;
            }
            else if(sum<30) cout << "F" << endl;
        }
        if(m == -1 || f == -1) cout << "F" << endl;
    
    }
}