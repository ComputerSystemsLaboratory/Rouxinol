#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){
    int m,f,r;
    while(true){
        cin >> m >> f >> r;
        if(m==-1 && f==-1 && r==-1){
            break;
        }
        if(m==-1 || f==-1){
            cout << "F" << endl;
            continue;
        }else if(80<=m+f){
            cout << "A" << endl;
            continue;
        }else if(65<=m+f && m+f<80){
            cout << "B" << endl;
            continue;
        }else if(50<=m+f && m+f<65){
            cout << "C" << endl;
            continue;
        }else if(30<=m+f && m+f<50 && 50 <= r){
            cout << "C" << endl;
            continue;
        }else if(30<=m+f && m+f<50 && r<50){
            cout << "D" << endl;
            continue;
        }else if(m+f<30){
            cout << "F" << endl;
            continue;
        }



    }


    return 0;
}

