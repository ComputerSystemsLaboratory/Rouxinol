#include<iostream>
using namespace std;

bool ispn(int x){
	if(x == 2 || x == 3)return true;
	if(x%2 == 0 || x%3 == 0 || x <= 4) return false;
	for(int i = 6; (i-1)*(i-1) <= x; i++)
		if(x%(i-1) == 0 || x%(i+1) == 0)return false;
	return true;
}

int main(){
	int n, count = 0, a;
	
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cin>>a;
		if(ispn(a))count++;
	}
	cout<<count<<endl;
	return 0;
}
