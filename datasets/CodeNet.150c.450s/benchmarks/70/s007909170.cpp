#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main(void){
    int month,day,ans;
    while(1){
        cin >> month >> day;
        if(month==0) break;
        if(month==1){
            ans=day;
        }
        if(month==2){
            ans=day+31;
        }
        if(month==3){
            ans=day+60;
        }
        if(month==4){
            ans=day+91;
        }
        if(month==5){
            ans=day+121;
        }
        if(month==6){
            ans=day+152;
        }
        if(month==7){
            ans=day+182;
        }
        if(month==8){
            ans=day+213;
        }
        if(month==9){
            ans=day+244;
        }
        if(month==10){
            ans=day+274;
        }
        if(month==11){
            ans=day+305;
        }
        if(month==12){
            ans=day+335;
        }
        ans=ans%7;
        if(ans==1) cout << "Thursday" << endl;
        if(ans==2) cout << "Friday" << endl;
        if(ans==3) cout << "Saturday" << endl;
        if(ans==4) cout << "Sunday" << endl;
        if(ans==5) cout << "Monday" << endl;
        if(ans==6) cout << "Tuesday" << endl;
        if(ans==0) cout << "Wednesday" << endl;
    }
    return 0;
}