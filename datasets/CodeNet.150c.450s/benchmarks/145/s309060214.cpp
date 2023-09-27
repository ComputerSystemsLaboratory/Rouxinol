#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
string str,ans,ans2;
map<string,int> tab;
int main(){
	while(cin>>str){
		if(str.size()>ans2.size())	ans2 = str;
		tab[str]++;
		if(tab[ans]<tab[str])	ans = str;
	}
	cout << ans << ' ' << ans2 << endl;
	return 0;
}
