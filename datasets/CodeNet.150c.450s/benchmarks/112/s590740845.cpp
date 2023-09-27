#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>

using namespace std;

int main(){
	int n;
	
	while(cin>>n,n){
		string str="";
		string bef="",aft="";
		for(int i=0;i<n;i++){
			char b,a;
			cin>>b>>a;
			bef+=b;
			aft+=a;
		}
		int n2;
		cin>>n2;
		for(int i=0;i<n2;i++){
			char a;
			cin>>a;
			for(int j=0;j<n;j++){
				if(a==bef[j]){
					a=aft[j];
					break;
				}
			}
			str+=a;
		}
		cout<<str<<endl;
	}
	return 0;
}