#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<iomanip>
 
#define EPS (1e-10)
using namespace std;
#define PI (3.1415926535)

int main(){
	vector<string> word;
	vector<int> count;

	int imax = 0;
	string s;

	while(cin >> s){
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
		bool b = true;
		int num;
		for(int i = 0; i < word.size(); i++){
			if(word[i] == s){
				b = false;
				num = i;
				break;
			}
		}
		if(b){
			word.push_back(s);
			count.push_back(0);
		}else{
			count[num]++;
			if(count[num] > count[imax]){
				imax = num;
			}
		}
	}

	int l = 0;
	for(int i = 0; i < word.size(); i++){
		if(word[l].size() < word[i].size()){
			l = i;
		}
	}

	cout << word[imax] << ' ' << word[l] << endl;

	return 0;
}