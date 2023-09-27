#include <iostream>
#define MAX(a,b) ((a)>(b)?(a):(b))
using namespace std;

int main(void){
	int a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	cout<<MAX(a+b+c+d,e+f+g+h)<<endl;
	return 0;
}