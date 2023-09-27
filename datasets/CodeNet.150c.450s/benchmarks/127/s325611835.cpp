#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<string> str;
	vector<string> ans;
	string s[120];
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	
	for (int k = 0; k < n; k++){
		str.clear();
		ans.clear();
		for (unsigned int i = 0; i < s[k].size(); i++){
			string str1(s[k].substr(0, i));
			string str2(s[k].substr(i, s[k].size() - i));
			str.push_back(str1 + str2);
			str.push_back(str2 + str1);
			
			reverse(str1.begin(), str1.end());
			str.push_back(str1 + str2);
			str.push_back(str2 + str1);
			
			reverse(str1.begin(), str1.end());
			reverse(str2.begin(), str2.end());
			str.push_back(str1 + str2);
			str.push_back(str2 + str1);
			
			reverse(str1.begin(), str1.end());
			str.push_back(str1 + str2);
			str.push_back(str2 + str1);
		}
		
		unsigned int n = 1;
		ans.push_back(s[k]);
		for (unsigned int i = 0; i < str.size(); i++){
			bool f = true;
			for (unsigned int j = 0; j < ans.size(); j++){
				if (str[i] == ans[j]){
					f = false;
					break;
				}
			}
			if (f){
				n++;
				ans.push_back(str[i]);
			}
		}
		
		cout << n << endl;
	}
	
	return (0);
}