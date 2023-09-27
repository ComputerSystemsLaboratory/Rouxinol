#include <iostream>
using namespace std;
int main(){
	const string TABLE[] = {".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	int n;
	cin >> n;
	for(int i=0;i<n;++i){
		string s;
		string ans;
		int k=0,l=-1;
		bool in = false;
		cin >> s;
		for(int j=0;j<s.size();++j){
			if(s[j]=='0'){
				if(in){
					ans+=TABLE[k][l];
				}
				in = false;
				k=0;
				l=-1;
			}else{
				in = true;
				l++;
				k=s[j]-'1';
				l%=TABLE[k].size();
			}
		}
		cout << ans << "\n";
	}
	return 0;
}