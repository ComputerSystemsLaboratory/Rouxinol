#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){
	int n,m,ha[110],ta[110],tha,tta;
	while(cin>>n>>m){
		tha=0;
		tta=0;
		if(n==0 && m==0){
			break;
		}
		for(int i=0;i<n;i++){
			cin>>ta[i];
			tta+=ta[i];
		}
		for(int i=0;i<m;i++){
			cin>>ha[i];
			tha+=ha[i];
		}
		sort(ta,ta+n);
		sort(ha,ha+m);
		int ta1=900,ha1=900;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(tta>=tha && (tta-tha)==((ta[i]-ha[j])*2)){
					ta1=ta[i];
					ha1=ha[j];
					i=200;
					j=200;
					break;
				}
				if(tha>=tta && (tha-tta)==((ha[j]-ta[i])*2)){
					ta1=ta[i];
					ha1=ha[j];
					i=200;
					j=200;
					break;
				}
			}
		}
		if(ta1==900){
			cout<<-1<<endl;
		}
		else{
			cout<<ta1<<" "<<ha1<<endl;
		}
	}
	return 0;
}