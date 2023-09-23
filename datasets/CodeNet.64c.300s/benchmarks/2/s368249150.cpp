#include<iostream>

using namespace std;

int main(void){

    int m, f, r, T;

    char G;

    while(true){

        cin >> m >> f >> r;

        T = m + f;

        if(m == -1 && f == -1 && r == -1)break;

        if(m == -1 || f == -1 ) G = 'F';
        else{
             if(T >= 80) G = 'A';
             if(T >= 65 && T < 80) G = 'B';
             if(T >= 50 && T < 65) G = 'C';
             if(T >= 30 && T < 50) {
                   if(r >= 50) G = 'C';
                   else{G = 'D';
                   }
             }    
        }
        if(T < 30) G = 'F';

        cout << G << endl;

    }

return 0;

}