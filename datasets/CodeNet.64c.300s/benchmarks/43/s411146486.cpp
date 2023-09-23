#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int x,s,t;

int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cin>>x;
			if(i==0){s+=x;}
			else{t+=x;}
		}
	}
	cout<<max(s,t)<<endl;
	return 0;
}