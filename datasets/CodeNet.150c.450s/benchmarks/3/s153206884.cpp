#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,com;
	int n,a,b;
	cin>>str>>n;
	for(int i=0;i<n;++i){
		cin>>com>>a>>b;
		switch(com[2]){
			case 'p':
				cin>>com;
				str=str.substr(0,a)+com+str.substr(b+1);
				break;
			case 'v':
				com=str.substr(a,b-a+1);
				str=str.substr(0,a)+string(com.rbegin(),com.rend())+str.substr(b+1);
				break;
			case 'i':
				cout<<str.substr(a,b-a+1)<<endl;
				break;
		}
	}
	return 0;
}