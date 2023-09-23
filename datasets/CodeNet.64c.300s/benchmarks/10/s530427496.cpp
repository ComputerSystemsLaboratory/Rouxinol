#include <iostream>     
#include <algorithm>
using namespace std;

int main(){
	int x,y;
	
	while(cin>>x>>y){
		if((x|y) == 0) break;
		cout<<min(x,y)<<" "<<max(x,y)<<endl;
	}
	
}