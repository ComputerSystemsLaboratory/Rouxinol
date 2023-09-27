#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;
struct dot{
	long long int k,p,l,r;
};
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		dot p[n+100];
		for(int i=1;i<=n;i++){
			cin>>p[i].k;
			if(i/2)
				p[i].p=i/2;
			else
				p[i].p=0;
			if(i*2<=n)
				p[i].l=i*2;
			else
				p[i].l=0;
			if(i*2+1<=n)
				p[i].r=i*2+1;
			else
				p[i].r=0;
		}
		for(int i=1;i<=n;i++){
			cout<<"node "<<i<<": key = "<<p[i].k<<", ";
			if(p[i].p>0)
				cout<<"parent key = "<<p[p[i].p].k<<", ";
			if(p[i].l>0)
				cout<<"left key = "<<p[p[i].l].k<<", ";
			if(p[i].r>0)
				cout<<"right key = "<<p[p[i].r].k<<", ";
			cout<<endl;
		}
		
	}
	return 0;
}
