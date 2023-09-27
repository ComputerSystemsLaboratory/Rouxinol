#include<iostream>
#include<algorithm>
#include <functional>
using namespace std;
int main(){
	int d[6]={};
	for(int i=0;i<5;i++){
		cin>>d[i];
	}
	sort(d,d+5,greater<int>());
	for(int i=0;i<4;i++){
		cout<<d[i]<<" ";
	}
	cout<<d[4]<<endl;
	
	return 0;
}