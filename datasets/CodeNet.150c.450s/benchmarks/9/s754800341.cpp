#include <iostream>
using namespace std;
int main(){
	int shuffle;
	string str;
	while(cin>>str&&str!="-"){
		cin>>shuffle;
		for(int i=0;i<shuffle;i++){
			int h;
			cin>>h;
			string tmp=str.substr(0,h);
			str.erase(0,h);
			str+=tmp;

		}
		cout<<str<<endl;
	}
	return 0;
}