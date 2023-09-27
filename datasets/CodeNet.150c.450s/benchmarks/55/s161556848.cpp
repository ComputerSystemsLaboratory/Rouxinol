#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector<int> ans;
	while(1){
		string str;
		getline(cin,str);
		if(str=="0") break;
		int sum=0;
		for(int i=0; i<(int)str.size(); i++){
			sum+=str[i]-'0';
		}
		ans.push_back(sum);
	}
	for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
	return 0;
}
