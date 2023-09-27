#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n<<":";
	int t=2;
	while(true){
		if(n%t==0){
			cout<<" "<<t;
			n/=t;
		}
		else{
			t++;
			if(t*t>n)break;
		}
	}
	if(n!=1)cout<<" "<<n;
	cout<<endl;
	return 0;
}