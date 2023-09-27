#include <iostream>
#include <string>
using namespace std;

string check(int num);

int main(){
	string s;
	string p;
	string ans;
	cin >> s >> p;
	for(int i = 0;i < 100;i++){
		ans = "No";
		if(!s[i])break;
		
		if(s[i]==p[0]){
			for(int j = 0;j < 100;j++){
				if(!p[j]){
					break;
				}else if(s[i+j] == p[j] || s[i+j-s.size()] == p[j]){
					ans = "Yes";
				}
				else{
					ans = "No";
					break;
				}
			}
		}
		
		if(ans == "Yes")break;
	}
	cout << ans << "\n";
	
	return 0;
}