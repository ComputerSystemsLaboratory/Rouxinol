#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[101]={},b;
	while(cin>>b){
		a[b]++;
	}
	b=0;
	for(int i=1;i<=100;i++){
		if(b<a[i])b=a[i];
	}
	for(int j=1;j<=100;j++){
		if(b==a[j])cout<<j<<endl;
	}
    return 0;
    }
