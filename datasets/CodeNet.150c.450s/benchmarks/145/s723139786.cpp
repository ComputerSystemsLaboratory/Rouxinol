#include <iostream>
#include<map>
#include<string>
using namespace std;

int main(void){
	map<string,int> ans;
	char a[40];
	string best,high;
	while(!cin.eof()){
		cin>>a;
		string kari(a);
		if(ans.count(kari))
			ans[kari]++;
		else
			ans[kari]=1;
		if(ans[best]<ans[kari])
			best=kari;
		if(high.size()<kari.size())
			high=kari;
	}
	cout<<best.c_str()<<" "<<high.c_str()<<endl;
	return 0;
}