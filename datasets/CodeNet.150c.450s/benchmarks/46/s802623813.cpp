#include<iostream>
using namespace std;
int main(){
int n,x,i,k,a=0,j,h;
	while(cin>>n>>x){
		if(n==0&&x==0){
			break;
		}
		a=0;
		for(k=1;k<n-1;k++){
			for(i=k+1;i<n;i++){
				for(h=i+1;h<n+1;h++){
					
					if(k+i+h==x&&k!=i&&k!=h&&i!=h){
						a++;	
					}
				}
			}
		}
		cout<<a<<endl;
	}
return 0;
}