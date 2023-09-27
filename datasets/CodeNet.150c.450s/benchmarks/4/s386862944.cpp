#include <cstdio>
#include <iostream>
using namespace std;


int main(){
    while(1){
        int m,f,r;
        string grade;
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1)
            break;
        int s = m + f;
        if(s >= 80) grade = "A";
        else if(s >= 65) grade = "B";
        else if(s >= 50) grade = "C";
        else if(s>=30){
            if(r >= 50) grade = "C";
            else grade = "D";
        }
        else grade = "F";
        if(m == -1 ||f == -1) grade = "F";
        cout << grade << endl;
    }
    return 0;
}
