#include <iostream>
using namespace std;
int C[10001]={0};
int n=0, a;
int main() 
{
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a; C[a]++;
	}
	bool first = true;
	for(int i=0;i<10001;i++){
		for(int j=0;j<C[i];j++){
			if (first) { first=false;} else {cout<<' ';}
			cout<<i;
		}
	}
cout<<endl;
}