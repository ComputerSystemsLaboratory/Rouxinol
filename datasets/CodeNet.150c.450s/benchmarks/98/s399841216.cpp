#include<iostream>
using namespace std;

int main(){
	int n,m,i,j,sums,sumt,anss,anst,judge;
	int s[100];
	int t[100];

	while(cin>>n>>m,n||m){
		sums=sumt=0;
		anss=anst=100;
		judge=0;
		for(i=0;i<n;i++){
			cin>>s[i];
			sums+=s[i];
		}
		for(i=0;i<m;i++){
			cin>>t[i];
			sumt+=t[i];
		}

		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				int swaps=sums+t[j]-s[i];
				int swapt=sumt+s[i]-t[j];
				if(swaps==swapt&&anss+anst>s[i]+t[j]){
					anss=s[i];
					anst=t[j];
					judge=1;
				}
			}
		}
		if(judge==1){
			cout<<anss<<' '<<anst<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}

	return(0);
}