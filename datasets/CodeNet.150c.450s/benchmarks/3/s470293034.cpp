#include "bits/stdc++.h"
using namespace std;

int main() {
    string s,ss,sss;
    int n,m,l;
    cin>>s;
	cin>>n;

	for (int i = 0; i < n; ++i) {
		cin>>ss>>m>>l;
		if(ss=="replace"){
			cin>>sss;
			s.replace(m,l-m+1,sss);
		}else if(ss=="reverse"){
			string temp=s.substr(m,l-m+1);
			for (int j = 0; j < temp.size(); ++j) {
				s[j+m]=temp[temp.size()-j-1];
			}
		}else if(ss=="print"){
			cout<<s.substr(m,l-m+1)<<endl;
		}
	}
}