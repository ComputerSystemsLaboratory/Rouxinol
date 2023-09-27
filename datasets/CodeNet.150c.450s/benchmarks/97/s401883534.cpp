#include <algorithm>
#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int N,n,d,x[200],y[200],dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

int main(){
    while(cin>>N&&N){
	int Mx=0,mx=0,My=0,my=0;
	rep(i,N-1){
	    cin>>n>>d;
	    x[i+1]=x[n]+dx[d];y[i+1]=y[n]+dy[d];
	    Mx=max(Mx,x[i+1]);mx=min(mx,x[i+1]);
	    My=max(My,y[i+1]);my=min(my,y[i+1]);
	}
	cout<<Mx-mx+1<<" "<<My-my+1<<endl;
    }
}