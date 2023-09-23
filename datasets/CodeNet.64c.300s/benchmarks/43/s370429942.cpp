#include <iostream>
using namespace std;

int main(void){
	int i,j,x,s[2]={0,0};

	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			cin>>x;
			s[i]+=x;
		}
	}
	if(s[0]>s[1]) cout<<s[0]<<endl;
	else cout<<s[1]<<endl;

	return 0;
}