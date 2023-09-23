#include <iostream>
#include <string>
using namespace std;

int main(){
    int m,f,r;
    int num = 0;
    string grade;
    while(1){
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r ==-1) break;
        if(m + f < 30 || m == -1 || f == -1) grade += 'F';
        else if(m + f >= 80) grade += 'A';
        else if(m + f >=65 && m + f < 80) grade += 'B';
        else if(m + f >= 50 && m + f < 65) grade += 'C';
        else if(m + f >= 30 && m + f < 50) {
            (r >= 50)?grade+= 'C':grade+='D';
        }
       
    }
    for(int i = 0; i < grade.length(); i++){
        cout << grade[i] << endl;
    }
    return 0;
}
