#include <bits/stdc++.h>
using namespace std;

string str_number(int num,int digit){
	ostringstream ostr;
	ostr << setfill('0') << setw(digit) << num;
	return ostr.str();
}

int min_number(string str){
	sort(str.begin(),str.end());
	return stoi(str);
}

int max_number(string str){
	sort(str.begin(),str.end());
	return stoi(string(str.rbegin(),str.rend()));
}

int main(){
	int a,l;
	while(cin >> a >> l,l){
		vector<int> records;
		while(find(records.begin(),records.end(),a) == records.end()){
			records.emplace_back(a);
			a = max_number(str_number(a,l)) - min_number(str_number(a,l));
		}
		auto it = find(records.begin(),records.end(),a);
		cout << distance(records.begin(),it) << " " << a << " " << distance(it,records.end()) << endl;
	}
	return 0;
}