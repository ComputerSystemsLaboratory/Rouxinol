#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	double x[3],y[3],px,py;
	while(cin>>x[0]>>y[0]){
		for(int i=1;i<3;i++)cin>>x[i]>>y[i];
		cin>>px>>py;
		bool ok=true;
		for(int i=0;i<3;i++){
			bool plus=false;
			if(x[(i+1)%3]==x[(i+2)%3]){
				if(x[i]>x[(i+1)%3])plus=true;
			}
			else{
				double a,b;
				a=(x[i]-x[(i+1)%3])*(y[(i+2)%3]-y[(i+1)%3]);
				b=(y[i]-y[(i+1)%3])*(x[(i+2)%3]-x[(i+1)%3]);
				if(a>b)plus=true;
			}
			bool pnt=false;
			if(x[(i+1)%3]==x[(i+2)%3]){
				if(px>x[(i+1)%3])pnt=true;
			}
			else{
				double a,b;
				a=(px-x[(i+1)%3])*(y[(i+2)%3]-y[(i+1)%3]);
				b=(py-y[(i+1)%3])*(x[(i+2)%3]-x[(i+1)%3]);
				if(a>b)pnt=true;
			}
			if(pnt!=plus)ok=false;
		}
		if(ok)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}