#include <iostream>
using namespace std;
int main(){
	while(1){
		int a;
		
		for(int i=1; ; i++){
			cin>>a;
			if(a==0) break;

			cout<<"Case "<<i<<": "<<a<<endl;
		}
		if(a==0) break;
	}
}