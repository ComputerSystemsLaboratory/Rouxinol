#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		int d[n],p[n];
		for(int i=0;i<n;i++){
			cin>>d[i]>>p[i];
		}
		int pm=0,nowp;
		while(m>0){
			for(int i=0;i<n;i++){
				pm=max(pm,p[i]);
				if(pm==p[i]) nowp=i;
			}
			if(pm==0) break;
			if(m>=d[nowp]){
				m=m-d[nowp];
				d[nowp]=0;
				p[nowp]=0;
			}
			else{
				d[nowp]=d[nowp]-m;
				m=0;
			}
			pm=0;
		}
		int ptotal=0;
		for(int i=0;i<n;i++){
			ptotal=ptotal+p[i]*d[i];
		}
		cout<<ptotal<<endl;
	}
    return 0;
}