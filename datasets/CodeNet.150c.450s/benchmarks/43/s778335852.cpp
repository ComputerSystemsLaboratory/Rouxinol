#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
while(n!=0){
	int ap=0,bp=0;
	int a,b;
	for(int k=0;k<n;k++){
		cin>>a>>b;
		if(a>b){
			ap=ap+a+b;
		}
		else if(a<b){
			bp=bp+a+b;
		}
		else{
			ap=ap+a;
			bp=bp+a;
		}
	}
	cout<<ap<<" "<<bp<<endl;
	cin>>n;
}
	return 0;
}