#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	string str,s,mls,mcs,input[100];
	map <string,int> dic;
	int n,c,a,ml,mc;
	getline(cin,str);
	c = a = mc = ml = 0;
	str += ' ';
	while(str.length()){
		n = str.find(' ');
		s = str[c];
		++c;
		for(;c < n;++c){
			s += str[c];
		}
		str.erase(0,n+1);
		c = 0;
		input[a] = s;
		++a;
		++dic[s];
		if(s.length() > ml) {
			ml = s.length();
			mls = s;
		}
	}
	for(int i = 0;i < a;++i){
		if(mc < dic[input[i]]){
			mc = dic[input[i]];
			mcs = input[i];
		}
	}
	cout << mcs << " " << mls << endl;
	return 0;
}