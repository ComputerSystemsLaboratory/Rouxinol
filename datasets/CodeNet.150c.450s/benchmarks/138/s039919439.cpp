#include <iostream>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	if(x<y){
		int tmp;
		tmp = x;
		x = y;
		y = tmp;
	}
	int amari = x%y;
	while(amari!=0){
		x=y;
		y=amari;
		amari = x%y;
	}
	cout<<y<<endl;
	return 0;
}