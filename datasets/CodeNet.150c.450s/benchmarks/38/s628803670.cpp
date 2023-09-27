#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(pow(a,2)+pow(b,2)==pow(c,2)){
			cout<<"YES"<<endl;
		}else if(pow(b,2)+pow(c,2)==pow(a,2)){
			cout<<"YES"<<endl;
		}else if(pow(a,2)+pow(c,2)==pow(b,2)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}