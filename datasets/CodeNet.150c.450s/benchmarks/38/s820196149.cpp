#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a;
	while(cin>>a>>b>>c){
		if(a>b){
			if(c>a){
				if(c*c==a*a+b*b){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}else{
				if(a*a==c*c+b*b){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
		}else{
			if(c>b){
				if(c*c==a*a+b*b){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}else{
				if(b*b==c*c+a*a){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
		}
	}

	return 0;
}