#include<iostream>
#include<cstdio>
using namespace std;
int w,n,num[31];
int main(){
    int a,b;
    cin>>w>>n;
    for(int i=0;i<w;i++)num[i]=i+1;
    for(int i=0;i<n;i++){
        scanf("%d,%d",&a,&b);
        swap(num[a-1],num[b-1]);
    }
    for(int i=0;i<w;i++)cout<<num[i]<<endl;
    return 0;
}