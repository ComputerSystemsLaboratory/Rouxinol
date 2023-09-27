#include<bits/stdc++.h>
using namespace std;

int n,a[3];

int main(){
    scanf("%d",&n);
    while(n--){
        for(int i=0;i<3;i++)scanf("%d",&a[i]);
        sort(a,a+3);
        if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1])puts("YES");
        else puts("NO");
    }
    return 0;
}