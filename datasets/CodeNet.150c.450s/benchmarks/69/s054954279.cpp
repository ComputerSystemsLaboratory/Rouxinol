#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		bool t=true;
		b=0,c=0;
		for(int j=0;j<10;j++){
			cin>>a;
			if(b<a)
				b=a;
			if(b>a&&c<a)
				c=a;
			if(c>a)
				t=false;
		}
		if(t==true)
			cout<<"YES"<<endl;
		if(t==false)
			cout<<"NO"<<endl;
	}
	return 0;
}