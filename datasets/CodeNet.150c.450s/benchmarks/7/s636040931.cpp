#include <bits/stdc++.h>
using namespace std;

int main(){
	int h = 0,m = 0,l = 0,tmp,i;

	for(i = 0;i < 10;i++){
		cin>>tmp;
		if(tmp >= h){
			l = m;
			m = h;
			h = tmp;
		}else if(tmp >= m){
			l = m;
			m = tmp;
		}else if(tmp >= l){
			l = tmp;
		}
	}
	cout<<h<<endl;
	cout<<m<<endl;
	cout<<l<<endl;
	return 0;
}