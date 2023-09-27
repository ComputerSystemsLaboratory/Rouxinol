#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >>n){
        if(n == 0) break;
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            int tmpa, tmpb;
            cin >>tmpa >>tmpb;
            if(tmpa > tmpb){
                a += (tmpa + tmpb);
            } else if(tmpa == tmpb){
                a += tmpa;
                b += tmpb;
            } else{
                b += (tmpa + tmpb);
            }
        }
        cout <<a <<" " <<b <<endl;
    }
    return 0;
}