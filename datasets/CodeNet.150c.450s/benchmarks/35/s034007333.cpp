#include<cstdio>
#include<iostream>
using namespace std;

int main(void){
	long ans=0,part=0;
	int n,i,data;

	cin>>n;
	while(n!=0){
		for(i=0;i<n;i++){
			cin>>data;
			if(i==0){
					ans=data;
					if(data>0)
						part+=data;
			}
			else{
				part+=data;
				if(part<0)
					part=0;
				else{
					if(ans<part)
						ans=part;
				}
			}
		}
		cout<<ans<<endl;
		part=0;
		cin>>n;
	}

	return 0;
}