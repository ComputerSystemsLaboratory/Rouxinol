#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int x=a,y=b;
		while(true){
			if(x==y)
				break;
			if(x>y)
				x-=y;
			else if(y>x)
				y-=x;
		}
		cout<<x<<" ";
		int keep=x;
		x=a/keep;
		y=b/keep;
		cout<<x*y*keep<<endl;
	}
	return 0;
}