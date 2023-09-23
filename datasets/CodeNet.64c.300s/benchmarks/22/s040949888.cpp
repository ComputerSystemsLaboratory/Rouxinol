#include<iostream>
#include<math.h>
int main(){
	using namespace std;
	int i,a,b,c;

	cin>>i;
	while(cin>>a>>b>>c){
		if(a*a==b*b+c*c){
			cout<<"YES"<<endl;
		}
		else if(c*c==b*b+a*a){
			cout<<"YES"<<endl;
		}
		else if(b*b==a*a+c*c){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}