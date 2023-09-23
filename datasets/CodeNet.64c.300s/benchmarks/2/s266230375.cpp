#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c, a != -1 || b != -1 || c != -1){
        char grade;
        if(a == -1 || b == -1) grade = 'F';
        else if(a + b >= 80) grade = 'A';
        else if(a + b >= 65) grade = 'B';
        else if(a + b >= 50) grade = 'C';
        else if(a + b >= 30){
             grade = 'D';
             if(c >= 50) grade = 'C';
        }else
            grade = 'F';
        cout << grade << endl;
    }
}