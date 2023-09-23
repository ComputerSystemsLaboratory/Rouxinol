#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int d;
    while(cin){
        cin >> d;
        if(!cin) break;
        int itg=0;
        for(int i=1;i*d<600;i++) itg+=pow(i*d,2)*d;
        cout << itg << endl;
    }
}