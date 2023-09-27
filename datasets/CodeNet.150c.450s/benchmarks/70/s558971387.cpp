#include<bits/stdc++.h>
using namespace std;

int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
    int m,d;

    while(cin>>m>>d,m){
        for(int i=1;i<m;i++)d+=month[i];
        d=(d-1)%7+1;
        string ans;
        switch((d+2)%7){
        case 0:ans="Monday";break;
        case 1:ans="Tuesday";break;
        case 2:ans="Wednesday";break;
        case 3:ans="Thursday";break;
        case 4:ans="Friday";break;
        case 5:ans="Saturday";break;
        case 6:ans="Sunday";break;
        }

        cout<<ans<<endl;
    }
}