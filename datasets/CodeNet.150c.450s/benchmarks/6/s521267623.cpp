#include<bits/stdc++.h>
using namespace std;
const long long INF=1LL<<62;
inline void read(int &x){
    x=0;int f=1;
    char ch=getchar();
    while(!isdigit(ch)) {if(ch=='-') f=-1;ch=getchar();}
    while(isdigit(ch)) x=x*10+ch-'0',ch=getchar();x*=f;
}
int main(){
    int a,b,c;
    read(a),read(b),read(c);
    if(a<b&&b<c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
