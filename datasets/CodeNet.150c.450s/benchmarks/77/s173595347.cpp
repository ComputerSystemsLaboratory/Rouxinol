#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m;
	int x[20],y[20],l;
	bool d[20];
	char e;
	while(true){
		cin>>n;
		if(n==0)
			break;
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
			d[i]=true;
		}
		int w=10,h=10;
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>e>>l;
			if(e=='N'){
				for(int j=0;j<l;j++){
					h++;
					for(int k=0;k<n;k++)
						if(x[k]==w&&y[k]==h)
							d[k]=false;
				}
			}
			if(e=='E'){
				for(int j=0;j<l;j++){
					w++;
					for(int k=0;k<n;k++)
						if(x[k]==w&&y[k]==h)
							d[k]=false;
				}
			}
			if(e=='S'){
				for(int j=0;j<l;j++){
					h--;
					for(int k=0;k<n;k++)
						if(x[k]==w&&y[k]==h)
							d[k]=false;
				}
			}
			if(e=='W'){
				for(int j=0;j<l;j++){
					w--;
					for(int k=0;k<n;k++)
						if(x[k]==w&&y[k]==h)
							d[k]=false;
				}
			}
		}
		bool nhk=true;
		for(int i=0;i<n;i++)
			if(d[i]==true)
				nhk=false;
		if(nhk==true)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
}