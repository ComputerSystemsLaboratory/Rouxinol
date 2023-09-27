#include <iostream>
using namespace std;
int main(void)
{
	int a=0,b=0,s=0,t=0;
	for(int i=0;i<4;i++){
		cin >> a;
		s+=a;
	}
	for(int i=0;i<4;i++){
		cin >> b;
		t+=b;
	}
	if(s<t){
		cout << t << endl;
	}
	else{
		cout << s << endl;
	}
	
	return 0;
}