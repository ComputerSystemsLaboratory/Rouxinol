#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(void){
	char s[13];
	char b[7];
	std::set<string> m;
	int a;
	scanf("%d",&a);
	while(a--){
		scanf("%s %s",b,s);
		if(b[0]=='i')m.insert(s);
		else{
			if(m.find(s)!=m.end())cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
	return 0;
}