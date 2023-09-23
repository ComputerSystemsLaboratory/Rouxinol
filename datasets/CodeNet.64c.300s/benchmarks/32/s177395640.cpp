#include<iostream>
using namespace std;
int main(){
 
 int a[10000],x=0,n,i,j,k=0,y=0,b;
 int mix=1000000;
 int min=-1000000;
 long long z=0; 
	cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){			
				if(a[j]<a[i]){
					b=a[i];
					a[i]=a[j];
					a[j]=b;				
			    }
			}
		}
		x=a[0];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){			
				if(a[i]<a[j]){
					b=a[i];
					a[i]=a[j];
					a[j]=b;				
			    }
			}
		}
		y=a[0];	
		for(i=0;i<n;i++){
			z=z+a[i];
		}
		cout<<x<<" "<<y<<" "<<z<<endl;
return 0;
} 