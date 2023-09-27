#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define lol(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
typedef long long ll;
using namespace std;
#define N (1<<17)
class BIT{
private:
    int dat[N];
public:
    void Init(){
	lol(i,N)dat[i]=0;
    }
    void Add(int i,int x){
	while(i<N){
	    dat[i]+=x;
	    i+=i&-i;
	}
    }
    int Sum(int i){
	int res=dat[i];
	while(i){
	    i-=i&-i;
	    res+=dat[i];
	}
	return res;
    }
};
int main(){
    int n,q;cin>>n>>q;
    BIT bit;bit.Init();
    while(q--){
	int c,a,b;cin>>c>>a>>b;
	if(c==0){
	    bit.Add(a,b);
	}
	if(c==1){
	    cout<<bit.Sum(b)-bit.Sum(a-1)<<endl;
	}
    }
    return 0;
}

