#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int m,d;
    int p[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    map<int, string> week;
    week[0]="Monday";
    week[1]="Tuesday";
    week[2]="Wednesday";
    week[3]="Thursday";
    week[4]="Friday";
    week[5]="Saturday";
    week[6]="Sunday";
    for (;;){
        scanf("%d %d",&m,&d);
        if (m==0) break;
        int tmp=3;
        if (m>1) {
            for (int i=1;i<m;i++) {
                tmp=(tmp+p[i])%7;
            }
        }
        cout<<week[(tmp+d-1)%7]<<endl;
    }
    return 0;
}