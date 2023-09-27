#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	string strs[9]={{".,!? "},{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},{"wxyz"}};
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string ans="",tmp;
		cin>>tmp;
		int a=0,b=0;//aがb回押された
		for(int j=0;j<tmp.size();j++){
			if(tmp[j]=='0'&&b>=1){
			ans+=strs[a-1][(b+strs[a-1].size()-1)%strs[a-1].size()];
			a=0,b=0;
			}
			if(tmp[j]=='0')continue;
			else {
				a=tmp[j]-'0';
				b++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}