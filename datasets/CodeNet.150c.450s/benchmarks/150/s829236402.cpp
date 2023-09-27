#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int c[10001]={};//for count
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		c[x]++;
	}
	bool start = false;
	for(int i=0;i<10001;i++){
		for(int j=0;j<c[i];j++){
			if(start == false){
				start = true;
			}else{
				cout<<" ";
			}
			cout<<i;
		}
	}
	cout<<endl;
	return 0;
}