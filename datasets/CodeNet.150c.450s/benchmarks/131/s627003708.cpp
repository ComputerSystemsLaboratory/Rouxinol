#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;



int main(){
	string a;
	string ai;
	int L;
	while (1){
		cin >> a >> L;
		if (a[0] == '0' && L == 0) break;
		map<string, int> m;
		m[a] = 0;
		int j = 1;
		ai = a;
		//??????????????????????????§?????????
		while (1){
			string max, min;
			stringstream ss;
			sort(ai.begin(), ai.end());
			min = ai;
			while (L > min.size()) min.insert(min.begin(),'0');
			sort(ai.rbegin(), ai.rend());
			max = ai;
			while (L > max.size()) max += '0';
			//?¨????
			int maxI, minI;
			ss.clear();
			ss << max;
			ss >> maxI;
			ss.clear();
			ss << min;
			ss >> minI;
			int sum = maxI - minI;
			//??????&0??°???
			ai.clear();
			ss.clear();
			ss << sum;
			ss >> ai;
			while (L > ai.size()) ai.insert(ai.begin(),'0');
			//??????????????????????????¢???
			if (m.find(ai) == m.end()){
				m[ai] = j;
				j++;
			}
			else{
				int aiI;
				ss.clear();
				ss << ai;
				ss >> aiI;
				ss.clear();
				cout << m[ai] << " " << aiI << " " << j - m[ai] << endl;
				break;
			}
		}
	}
	return 0;
}