#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
const int inf=1<<30;
const double pi=acos(-1);

class BIT{
	private:
	int N;
	vector<int> bit;
	public:
	BIT(int x){
		N=x;
		bit=vector<int>(++x);
	}
	void add(int x,int y){
		while(x<=N){
			bit[x]+=y;
			x+=x&-x;
		}
	}
	int sum(int x){
		int s=0;
		while(x){
			s+=bit[x];
			x-=x&-x;
		}
		return s;
	}
	int getsum(int x,int y){
		return sum(y)-sum(--x);
	}
	void open(){
		for(int i=1;i<=N;i++){
			cout<<bit[i]<<endl;
		}
	}
};

int n,q;

int main(){ 
	cin>>n>>q;
	BIT ans(n);
	for(int i=0;i<q;i++){
		int type,one,two;
		cin>>type>>one>>two;
		if(type) cout<<ans.getsum(one,two)<<endl;
		else ans.add(one,two);
	}
}