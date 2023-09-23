#include <iostream>
using namespace std;

int euclid(int x,int y){
	
	if(x%y==0) return y;
	else  return euclid(y,x%y);


}
int main(){
	int x,y;
	cin>>x;
	cin>>y;
	cout<<euclid(x,y)<<endl;


}