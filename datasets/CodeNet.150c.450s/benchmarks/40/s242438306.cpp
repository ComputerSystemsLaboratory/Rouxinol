#include<iostream>
#include<algorithm>

using namespace std;

void dice(){
        int d1,d2,d3,d4,d5,d6;
        cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6; 
    
        char dir;
        int tmp;
        while (true){
                cin >> dir;
                if (cin.eof()) break;   
                if (dir == 'E') {
                        tmp = d1; d1 = d4; d4 = d6; d6 = d3; d3 = tmp;    
                }else if (dir == 'N'){
                        tmp = d1; d1 = d2; d2 = d6; d6 = d5; d5 = tmp;
                }else if (dir == 'S'){
                        tmp = d1; d1 = d5; d5 = d6; d6 = d2; d2 = tmp;
                }else if (dir == 'W'){
                        tmp = d1; d1 = d3; d3 = d6; d6 = d4; d4 = tmp;
                }   
        }   
        cout << d1 << endl;
}

int main(){
        dice();
return 0;
}