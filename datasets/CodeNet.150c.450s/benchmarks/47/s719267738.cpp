#include <iostream>
using namespace std;
int main(){
	int a,b,x,y,r;
	std::cin>>a>>b>>x>>y>>r;
	if(x-r>=0&&x+r<=a&&y-r>=0&&y+r<=b){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}