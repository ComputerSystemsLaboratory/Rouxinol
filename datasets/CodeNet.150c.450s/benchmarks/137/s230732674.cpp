
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <set>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	set<long long int>dic;

	long long int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string op, str;
		cin >> op;
		cin >> str;
		if (op == "insert"){
			long long int num = 0;
			for (int j = 0; j < str.length(); j++){
				if (str[j] == 'A'){
					num += 1  * pow(10, j + 1);
				}
				else if (str[j] == 'C'){
					num += 2 * pow(10, j + 1);
				}
				else if (str[j] == 'G'){
					num += 3 * pow(10, j + 1);
				}
				else if (str[j] == 'T'){
					num += 4 * pow(10, j + 1);
				}
			}
		//	cout << num << endl;
			dic.insert(num);
		}
		else{
			long long int num = 0;
			for (int j = 0; j < str.length(); j++){
				if (str[j] == 'A'){
					num += 1 * pow(10, j + 1);
				}
				else if (str[j] == 'C'){
					num += 2 * pow(10, j + 1);
				}
				else if (str[j] == 'G'){
					num += 3 * pow(10, j + 1);
				}
				else if (str[j] == 'T'){
					num += 4 * pow(10, j + 1);
				}
			}
		//	cout << num << endl;
			if (dic.find(num) == dic.end()){
				cout << "no" << endl;
			}
			else{
				cout << "yes" << endl;
			}
		}
	}
	
	return 0;
}