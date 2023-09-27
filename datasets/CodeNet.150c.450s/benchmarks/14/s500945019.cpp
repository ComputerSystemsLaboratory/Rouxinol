#include <bits/stdc++.h>
using namespace std;
bool is(int i){
	if(i%3==0||i%10==3)return true;
	while(i/=10)if(i%10==3)return true;
	return false;
}
int main(){
	int a=1,u;cin>>u;for(;a<=u;a++)if(is(a))cout<<" "<<a;cout<<endl;
}