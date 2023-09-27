#include <iostream>
#include <map>
using namespace std;

int main(void){
	int maxC=0,maxLen=0;
	string s,maxS1,maxS2;
	map<string,int> m;

	while(cin>>s){
		m[s]++;
		if(maxC < m[s]){
			maxC = m[s];
			maxS1 = s;
		}
		if(maxLen < s.length()){
			maxLen = s.length();
			maxS2 = s;
		}
	}

	cout<<maxS1<<" "<<maxS2<<endl;

	return 0;
}