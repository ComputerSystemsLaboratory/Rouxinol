#include <iostream>
#include <algorithm>
#include <math.h>
#define MAX 100000
using namespace std;

int n,k;
int t[MAX];

int check(long long p){
    int i;
    int cnt=0;
    for(i=0;i<k;i++){
        long long s=0;
        while((s+t[cnt])<=p){
            s=s+t[cnt];
            cnt++;
            if(cnt==n)return n;
        }
    }
    return cnt;
}

long long min_p(){
    long long left=0;
    long long right=ceil(100000.0*10000.0/k);
    long long mid;
    while(right-left>1){
        mid=(left+right)/2;
        int v=check(mid);
        if(v>=n)right=mid;
        else left=mid;
    }
    return right;
}

int main()
{
    cin>>n>>k;
    int i;
    for(i=0;i<n;i++){
        cin>>t[i];
    }
    long long p=min_p();
    cout<<p<<endl;
}

//int main(){
//    int c=ceil(11.0/3);
//    int d=11/3;
//    int e=floor(11/3);
//    int f=round(11/3);
//    cout<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
//}