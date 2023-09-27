#include <iostream>
#include <string>
#include <map>
#include <stdio.h>
using namespace std;

int main() {
	string sp,st,hw,ew;
	map<string,int> sd;
	int s=0,e=0,k=0,h=0,m=0;
    getline(cin,st);
	st=st+"  ";
	while(e!=st.size()) {
	 for(e; st[e]!=' ' ;e++);
	 sp.append(st,s,e-s);
	 if (sp.length()>h) { h=sp.length(); hw=sp; }
	 if (sd.find(sp)==sd.end()) sd.insert(map<string,int>::value_type(sp,1));
	 else {sd[sp]++ ; if (sd[sp]>m) m=sd[sp]; }
	 e++; s=e; sp=""; 
	}
	map<string,int>::iterator it=sd.begin();
	for (h=0;it!=sd.end();it++) if (h<(*it).second) { h=(*it).second; ew=(*it).first;}
	cout << ew << " " << hw << endl;
	return 0;
}