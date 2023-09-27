#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,m,x,y,p,q,min,s[200],t[200];
	while(cin>>n>>m,n||m){
		x=0;
		y=0;
		min=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>s[i];
			x+=s[i];
		}
		for(int i=0;i<m;i++){
			cin>>t[i];
			y+=t[i];
		}
		for(int i=0;i<n;i++)
		for(int k=0;k<m;k++){
			if(x-s[i]+t[k]==y-t[k]+s[i]){
				if(s[i]+t[k]<min){
					min=s[i]+t[k];
					p=s[i];q=t[k];
				}
			}
		}
		if(min==INT_MAX)
		cout<<-1<<endl;
		else
		cout<<p<<' '<<q<<endl;
	}
	return 0;
}