 #include <iostream>
 #include <string>
#include <sstream>
using namespace std;
int main(){
	int x , y ;
	while(cin>>x>>y){
		x=x+y;
		stringstream a;
		a << x ;
		string str = a.str();
		y = str.size();
		cout << y << endl;
	}
}