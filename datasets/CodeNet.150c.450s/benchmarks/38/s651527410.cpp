#include<iostream>
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n;
	while(n--){
	 cin>>a>>b>>c;
	 a=a*a;b=b*b;c=c*c;
	 if(a+b==c || b+c==a || c+a==b){cout<<"YES";}else{cout<<"NO";}
	 cout<<endl;
	}
	return 0;
}