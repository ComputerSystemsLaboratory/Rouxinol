#include <iostream>
#include <valarray>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

bool search(string s, string p){
	int s_size = s.size();
	int p_size = p.size();
	if(s_size == 0 || p_size == 0) return false;
	bool flag = false;
	char head = p[0];
	for(int i = 0; i < s_size; i++){
		if(s[i] == head){
			int j;
			for(j = 0; j < p_size; j++)
				if(s[(i+j)%s_size] != p[j]) break;
			if (j == p_size){
				flag = true;
				continue;
			}
		}
	}
	return flag;
}

int main(){
	string s, p;
	cin >> s >> p;
	cout << (search(s,p)? "Yes" : "No") << endl;
}