
#include<iostream>
using namespace std;

int main(){
int x,y,z;
for(;;){
	cin>>x>>y;
	if(x==0&&y==0){break;}
	else if(x>y){z=x,x=y,y=z;}
	cout<<x<<" "<<y<<endl;
	}
return 0;
}