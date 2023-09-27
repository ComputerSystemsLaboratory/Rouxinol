#include <iostream>
using namespace std;

int main(){
	int n,s,min,max,sum;

	while(cin>>n && n>0){
		max=0;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>s;
			sum+=s;
			if(i==0) min=s;
			if(s>max) max=s;
			if(s<min) min=s;
		}
		cout<<(sum-max-min)/(n-2)<<endl;
	}
}