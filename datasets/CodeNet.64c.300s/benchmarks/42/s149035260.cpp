#include <iostream>
using namespace std;
int n,x,y,m,l,z,s;
char d;
int main(){
	while(cin>>n){
		if(n==0) break;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>x>>y;
			a[i]=30*x+y+1;
		}
		cin>>m;
		z=311;
		for(int i=0;i<m;i++){
			cin>>d>>l;
			if(d=='N'){
				for(int j=0;j<l;j++){
					z++;
					for(int k=0;k<n;k++){
						if(a[k]==z) a[k]=0;
					}
				}
			}
			else if(d=='S'){
				for(int j=0;j<l;j++){
					z--;
					for(int k=0;k<n;k++){
						if(a[k]==z) a[k]=0;
					}
				}
			}
			else if(d=='E'){
				for(int j=0;j<l;j++){
					z=z+30;
					for(int k=0;k<n;k++){
						if(a[k]==z) a[k]=0;
					}
				}
			}
			else if(d=='W'){
				for(int j=0;j<l;j++){
					z=z-30;
					for(int k=0;k<n;k++){
						if(a[k]==z) a[k]=0;
					}
				}
			}
		}
		s=0;
		for(int i=0;i<n;i++){
			s=s+a[i];
		}
		if(s==0){
			cout<<"Yes"<<endl;
		} else{
			cout<<"No"<<endl;
		}
	}
    return 0;
}