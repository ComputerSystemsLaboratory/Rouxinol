#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b,n;
	while(true){
		cin>>a>>b>>n;
		if(a==0&&b==0&&n==0)
			break;
		int count=0,s=a;
		while(s<2)
			s+=b;
		while(true){
			bool t=true;
			for(int j=2;j*j<=s;j++){
				if(s%j==0)
					t=false;
			}
			if(t==true)
				count++;
			if(count==n)
				break;
			s+=b;
		}
		cout<<s<<endl;
	}
	return 0;
}