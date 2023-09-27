#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int w[131072],sum[131072],n,k,l,r,mid;
char c;
bool is_digit(){
    return c<='9'&&c>='0';
}
void read(int &a){
    a=0;
    while((c=getchar())&&(is_digit())) a=a*10+c-'0';
}
bool pc(int a){
    memset(sum,0,sizeof(sum));
    int j=0;
    for(int i=0,t=0;i<n;i++){
        if(t+w[i]>a) j++,t=w[i];
        else t+=w[i];
    }
    return j<k;
}
int main(){
    read(n);
    read(k);
    for(int i=0;i<n;i++){
        read(w[i]);
        l=max(w[i],l);
        r+=w[i];
    }
    while(l!=r){
        mid=(l+r)/2;
        if(pc(mid)) r=mid;
        else l=mid+1;
    }
    cout<<l<<"\n";
    return 0;
}