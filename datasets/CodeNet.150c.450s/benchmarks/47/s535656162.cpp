#include <iostream>
using namespace std;
 int main (){
    int W, H, x, y, r ;
	cin >>W >>H >>x >>y >>r ;
	if (x+r >W ){ cout<< "No\n" ;}
	else if (x-r <0 ){
		cout<<"No\n";
	}
	else if (y+r >H){
		cout << "No\n";
	}
	else if (y-r <0){
		cout << "No\n";}
	else {
		cout << "Yes\n";
	}
	
    return 0 ;
 
}