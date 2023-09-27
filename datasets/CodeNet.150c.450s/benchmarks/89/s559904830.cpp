#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
class Atkin{
  public:
    int n, sqlim;
    vector<bool> prime;
    Atkin(int N):n(N+1){sqlim=(int)ceil(sqrt(n)); prime=vector<bool>(n,0); calc();}

    void calc(){
        int b;
        for (auto z:{1,5}) for (int y=z; y<=sqlim; y+=6) {
			for (int x=1; x<=sqlim && (b=4*x*x+y*y)<=n; ++x)prime[b].flip();
			for (int x=y+1; x<=sqlim && (b=3*x*x-y*y)<=n; x+=2)prime[b].flip();
		}
        for (auto z:{2,4}) for (int y=z; y<=sqlim; y+=6) {
			for (int x=1; x<=sqlim && (b=3*x*x+y*y)<=n; x+=2)prime[b].flip();
			for (int x=y+1; x<=sqlim && (b=3*x*x-y*y)<=n; x+=2)prime[b].flip();
		}
		for (int y=3; y<=sqlim; y+=6) for (auto z:{1,2}) 
			for (int x=z; x<=sqlim && (b=4*x*x+y*y)<=n; x+=3)prime[b].flip();
		prime[0]=0;
		for(int i=1;i<=sqlim;i++){
		    if(prime[i]==0)continue;
			int zz=i*i;
			for (int k=zz; k<=n; k+=zz)prime[k]=0;
		}
		prime[2]=prime[3]=1;
    }
};
int main(void){
    Atkin atkin(1000000);
    int a,d,n;
    while(cin>>a>>d>>n,n){
        for(int i=0;a<1000000;a+=d)
            if((i+=atkin.prime[a])==n) break;
        cout<<a<<endl;
    }
}