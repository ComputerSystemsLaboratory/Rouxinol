//ITP_1_2_C
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cin>>a>>b>>c;
	
	if(a<=b){
		if(a<=c){
			if(b<=c){
				cout<<a<<" "<<b<<" "<<c<<endl;
			}else cout<<a<<" "<<c<<" "<<b<<endl;
		}else if(a>c) cout<<c<<" "<<a<<" "<<b<<endl;
	}else if(b<=c){
		if(b<=a){
			if(c<=a){
				cout<<b<<" "<<c<<" "<<a<<endl;
			}else cout<<b<<" "<<a<<" "<<c<<endl;
		}else if(b>a) cout<<a<<" "<<b<<" "<<c<<endl;
	}else if(c<=a){
		if(c<=b){
			if(a<=b){
				cout<<c<<" "<<a<<" "<<b<<endl;
			}else cout<<c<<" "<<b<<" "<<a<<endl;
		}else if(c>b) cout<<b<<" "<<c<<" "<<a<<endl;
	}
		
	return 0;
}