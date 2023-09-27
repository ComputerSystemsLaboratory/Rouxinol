#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int m;
	
	cin >> m;
	
	for(int i=0; i<m; i++) {
		string in_str;
		set<string> set_str;
		
		cin >> in_str;
		
		// str?????????
		for(int i=1; i<in_str.size(); i++) {
			string str1(in_str);
			string str2(in_str);
			
			str1.erase(str1.begin()+i, str1.end());
			str2.erase(str2.begin()+0, str2.begin()+i);
			
			// cout << str1 << " " << str2 << endl;
			
			// str????????¢
			for(int i=0; i<4; i++) {
				switch(i) {
					case 0:
						break;
					case 1:
						reverse(str1.begin(), str1.end());
						break;
					case 2:
						reverse(str1.begin(), str1.end());
						reverse(str2.begin(), str2.end());
						break;
					case 3:
						reverse(str1.begin(), str1.end());
						break;
				}
				
				// cout << "  " << str1 << " " << str2 << endl;
				
				// str?????????
				for(int i=0; i<2; i++) {
					string str_join;
					
					switch(i) {
						case 0:
							str_join = str1 + str2;
							break;
						case 1:
							str_join = str2 + str1;
							break;
					}
					
					// cout << "    " << str_join << endl;
					
					// ???????????????
					set_str.insert(str_join);
				}
			}
		}
		
		cout << set_str.size() << endl;
	}
	
	return 0;
}