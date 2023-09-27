#include<cstdio>
#include<string>
#include<list>
#include<iostream>
#include<map>
#include<set>

using namespace std;

int n,m;
set<string> str;
int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		str.insert(s);
	}
	scanf("%d",&m);
	int flag=1;
	for(int i=0;i<m;i++){
		string s;
		cin >> s;
		if(str.find(s)!=str.end()){
			printf("%s by ",flag?"Opened":"Closed");
			cout << s << endl;
			flag=1-flag;
		}else{
			cout << "Unknown " << s << endl;
		}
	}
	return 0;
}