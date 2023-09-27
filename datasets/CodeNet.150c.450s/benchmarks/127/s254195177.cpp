#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<queue>
#include<complex>
#include<numeric>
#include<bitset>
#define INF 1001001001
#define EPS 1e-8

using namespace std;
typedef vector<int> vint;
typedef vector<vint>  vvint;
typedef pair<int,int> pint;


int main(){
	int m;
	string str;
	cin >> m;
	for(int l=0;l<m;l++){
		cin >> str;
		set<string> st;
		int i,j;
		st.insert(str);
		for(i=1;i<str.length();i++){
			string a,b;
			for(j=0;j<i;j++){
				a+=str[j];
			}
			for(j=i;j<str.length();j++){
				b+=str[j];
			}
			
			st.insert(a+b);
			reverse(a.begin(),a.end());
			st.insert(a+b);
			reverse(b.begin(),b.end());
			st.insert(a+b);
			reverse(a.begin(),a.end());
			st.insert(a+b);
			reverse(b.begin(),b.end());
			swap(a,b);
			st.insert(a+b);
			reverse(a.begin(),a.end());
			st.insert(a+b);
			reverse(b.begin(),b.end());
			st.insert(a+b);
			reverse(a.begin(),a.end());
			st.insert(a+b);
			reverse(b.begin(),b.end());
		}
		cout << st.size() << endl;
	}
			
	return 0;
}