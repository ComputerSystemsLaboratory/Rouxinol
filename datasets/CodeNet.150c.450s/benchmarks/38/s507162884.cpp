#include <bits/stdc++.h>
using namespace std;

int main(){
	int hen[3],n,i,max;
	cin>>n;
	for(i = 0;i < n;i++){
		cin>>hen[0]>>hen[1]>>hen[2];
		sort(hen,hen+3,greater<int>());

		if(pow(hen[0],2) == (pow(hen[2],2)+pow(hen[1],2)))
				cout<<"YES"<<endl;

		else
				cout<<"NO"<<endl;
	}
	return 0;
}