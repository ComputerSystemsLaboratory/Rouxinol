#include <iostream>
using namespace std;
#define f(a,b) ((x[i]-x[(i+1)%3])*(b-y[i])-(y[i]-y[(i+1)%3])*(a-x[i]))
int main()
{
	double x[4],y[4];
	while(cin>>x[0]>>y[0]){
		for(int i=1;i<4;i++) cin>>x[i]>>y[i];
		bool f=false;
		for(int i=0;i<3;i++){
			if(f(x[(i+2)%3],y[(i+2)%3])*f(x[3],y[3]) < 0){
				f = true;
				break;
			}
		}
		if(f) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}