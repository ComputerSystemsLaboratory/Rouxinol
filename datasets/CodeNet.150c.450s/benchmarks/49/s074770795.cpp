#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,s = 0;
	while(cin >> n && n > 0){
		int result = 0;
		vector<int> buf;
		for(int i = 0;i < n;i++){
			cin >> s;
			buf.push_back(s);
			result += s;
		}
		int min = *min_element(buf.begin(),buf.end());
		int max = *max_element(buf.begin(),buf.end());
		cout << (result - (min+max)) / (n-2) << endl;
	}
	
	return 0;
}