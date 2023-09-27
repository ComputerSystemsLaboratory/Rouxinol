#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	int cnt=0;
	cin>>a>>b>>c;
	for(int i=1;i<=c;i++){
		if(c%i==0 && a<=i && i<=b) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}