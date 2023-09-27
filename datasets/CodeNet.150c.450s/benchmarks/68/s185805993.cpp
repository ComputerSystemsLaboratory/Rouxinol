#include <algorithm>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

const int MAX=1000;

#define hoge(i,n) for(int i=0;i<n;i++)
int main(){
    int n,a[MAX],gap[MAX-1];
    while(cin>>n && n){
        hoge(i,n){
            scanf("%d", &a[i]);
        }
        sort(a,a+n);
        int mingap=20000000;
        hoge(i,n-1){
            gap[i]=a[i+1]-a[i];
            mingap=min(mingap,gap[i]);
        }
        cout << mingap <<endl;
    }
}