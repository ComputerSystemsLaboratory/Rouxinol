#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int t=0;
	
	cin>>a>>b>>c;

	for(int i=0 ; i<b-a+1 ;i++){
		if(c%(a+i)==0)
			t++;
	}
	cout<<t<<"\n";
}