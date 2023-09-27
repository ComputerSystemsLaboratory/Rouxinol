#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y,m,d;
		cin>>y>>m>>d;
		int miri=0,sum=0;
		for(int j=1;j<1000;j++){
			for(int k=1;k<=10;k++){
				if(j%3==0)miri+=20;
				else {
					if(k%2==1)miri+=20;
					else miri+=19;
				}
			}
		}
		for(int j=1;j<y;j++){
			for(int k=1;k<=10;k++){
				if(j%3==0)sum+=20;
				else {
					if(k%2==1)sum+=20;
					else sum+=19;
				}
			}
		}
		for(int j=1;j<m;j++){
			if((y)%3==0)sum+=20;
			else{
			if(j%2==1)sum+=20;
			else sum+=19;
			}
		}
		sum+=d;
		cout<<miri-sum+1<<endl;
	}
	return 0;
}