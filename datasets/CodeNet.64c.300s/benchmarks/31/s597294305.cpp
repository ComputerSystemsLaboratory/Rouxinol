#include <iostream>
#include <cstring>

using namespace std;

int main(void){
	bool t[32];
	memset(t,0,sizeof(t));
	int n;
	while(cin>>n){
		t[n]=true;
	}
	for(n=1;n<31;n++){
		if(!t[n]) cout << n << endl;
	}
}