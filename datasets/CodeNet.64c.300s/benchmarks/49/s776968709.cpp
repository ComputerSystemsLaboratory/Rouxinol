#include <iostream>
using namespace std;
 
int main() {
	int a,b,c;
	int n=10;
	while(cin>>a>>b){
	    c=a+b;
	    n=10;
	    for(int i = 0;i<7;i++){
 
	        if(c%n == c){
	            cout<<i+1<<endl;
	            break;
	        }
 
	        n=n*10;
	    }
	}
	return 0;
}