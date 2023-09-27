#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	while (1){
		int n;
		vector<int> student;
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++){
			int s;
			cin >> s;
			student.push_back(s);
		}
		int ans = 999999999;
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				ans = min(ans, abs(student[i] - student[j]));
			}
		}
		cout << ans << endl;
	}
	return 0;
}