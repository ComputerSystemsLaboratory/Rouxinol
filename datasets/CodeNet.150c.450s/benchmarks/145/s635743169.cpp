#include <iostream>
#include <sstream>
#include <map>
using namespace std;
int main(){
	string s,tmp,lw,histw;
	map<string,int> count;
	int maxh=0,maxl=0;
	getline(cin,s);
	stringstream ss;
	ss<<s;
	while(ss>>tmp){
		if(count.find(tmp)!=count.end())++count[tmp];
		else count[tmp]=1;
		if(count[tmp]>maxh){
			maxh=count[tmp];
			histw=tmp;
		}
		if(tmp.length()>lw.length())lw=tmp;
	}
	cout<<histw<<" "<<lw<<"\n";
	return 0;
}