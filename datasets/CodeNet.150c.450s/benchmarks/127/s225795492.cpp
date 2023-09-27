#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>

using namespace std;
int N;
string S;



int main(){
	cin >> N;
	for(int iii=0;iii<N;iii++){
		cin >> S;
		set<string> st;
		for(int i=0;i<S.size();i++){
			string s1 = S.substr(0,i+1);
			string s2 = S.substr(i+1,S.size());
			string s11 = s1;
			reverse(s11.begin(),s11.end());
			string s22 = s2;
			reverse(s22.begin(),s22.end());
			st.insert(s1+s2);
			st.insert(s11+s2);
			st.insert(s11+s22);
			st.insert(s1+s22);
			st.insert(s2+s1);
			st.insert(s22+s1);
			st.insert(s22+s11);
			st.insert(s2+s11);			
		}
		cout << st.size() << endl;
	}
	return 0;
}
