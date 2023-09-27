#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
int main(){
	int hig,wid,tmp,sta[35],fin[35],ans[35];
	char x;
	cin>>hig>>wid;
	for(int i=0;i<wid;i++){
		cin>>sta[i]>>x>>fin[i];
	}
	for(int i=1;i<=hig;i++){
		ans[i-1]=i;
	}
	for(int i=0;i<wid;i++){
		tmp=ans[sta[i]-1];
		ans[sta[i]-1]=ans[fin[i]-1];
		ans[fin[i]-1]=tmp;
	}
	for(int i=0;i<hig;i++){
		cout<<ans[i]<<endl;
	}
}