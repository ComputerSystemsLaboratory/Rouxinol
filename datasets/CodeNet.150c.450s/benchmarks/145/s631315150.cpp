#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string,int> data;
	string ans1,ans2,str;
	while(cin >> str){
		data[str]++;
		if(data[ans1] < data[str]) ans1 = str;
		if(ans2.size() < str.size() ) ans2 = str;
	}
	cout << ans1 << " " << ans2 << endl;
}