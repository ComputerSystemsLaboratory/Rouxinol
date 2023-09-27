#include<iostream>
using namespace std;

int main(){
	while(1){
		int ans=0;
		int n;
		cin>>n;
		if(cin.eof())break;
		for(int a=0;a<=9;a++){
			for(int b=0;b<=9;b++){
				for(int c=0;c<=9;c++){
					for(int d=0;d<=9;d++){
						if(a+b+c+d==n)ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
