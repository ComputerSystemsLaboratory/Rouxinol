#include<iostream>
using namespace std;
int main(){
 int x,y,i;
	while(cin>>x){
		cin>>y;
			if(x==0&&y==0){
				break;		
			}
			if(x>y){
				i=x;
				x=y;
				y=i;	
		}
	cout<<x<<" "<<y<<endl;
	}
return 0;
}