#include <bits/stdc++.h>
#define F(i,N) for(int i=0;i<(int)N;i++)
using namespace std;
int main(){
    int n,j,a[11],q,b,c,d,e;
    while(cin>>q>>b){
        if(q==0&&b==0)break;
        int sum=0;
        F(i,11)a[i]=0;
        F(i,q){cin>>c>>d;a[d]+=c;}
        for(int i=10;i>=0;i--){
            e=a[i];
            a[i]=a[i]-b;
            b=b-e;
            if(b<0)b=0;
            if(a[i]<0)a[i]=0;
        }
        F(i,11)sum+=a[i]*i;
        cout<<sum<<endl;
    }
}
 