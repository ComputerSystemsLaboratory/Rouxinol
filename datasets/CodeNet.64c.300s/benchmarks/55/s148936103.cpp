#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	
	int i=1;
	int x;
	while(cin>>x){
		if(x!=0){
			cout<<"Case "<<i++<<": "<<x<<endl;
		}
		else
			break;
	}
	
}