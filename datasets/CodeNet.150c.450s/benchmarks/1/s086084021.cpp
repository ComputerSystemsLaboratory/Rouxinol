#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#define rep(i,a,b) for(int (i)=(a);i<(b);i++)
#define INF 1000000000
#define MAX_N 150005
using namespace std;

int L[100005];

int main(){
    int n,a[100005];
    cin>>n;
    rep(i,0,n)cin>>a[i];
    
    L[0]=a[0];
    int length=1;
    for(int i=1;i<n;i++){
        if(L[length-1]<a[i]){
            L[length++]=a[i];
        }else{
            int right=length-1,left=0;
            int mid=0;
            while(left<=right){
                mid=(right+left)/2;
                if(L[mid]>a[i]){
                    if(mid==0||L[mid-1]<a[i])L[mid]=a[i];
                }
                if(L[mid]<a[i])left=mid+1;
                else right=mid-1;
            }
        }
    }
    cout<<length<<endl;
    
}