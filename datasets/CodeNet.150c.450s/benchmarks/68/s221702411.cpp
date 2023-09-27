#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,dif;
    while(cin>>n){
if(n==0)break;
        dif=1000000;
        int a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     sort(a,a+n);
for(int i=0;i<n-1;i++)
        if(max(a[i]-a[i+1], a[i+1]-a[i])<dif)dif=max(a[i]-a[i+1], a[i+1]-a[i]);

cout<<dif<<endl;
    }
    return 0;
}