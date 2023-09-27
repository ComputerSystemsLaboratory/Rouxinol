#include <iostream>
#include <string>
using namespace std;
int main(){
	int a[4],b[4];
	while(cin>>a[0]){
		int h=0,r=0;
	for(int i=1;i<4;i++)
		cin>>a[i];
	for(int i=0;i<4;i++){
		cin>>b[i];
		if(a[i]==b[i])
			h++;
		for(int j=0;j<4;j++){
			if(a[j]==b[i])
				r++;
		}
	}
	r-=h;
	cout<<h<<" "<<r<<endl;
	}
	return 0;
}