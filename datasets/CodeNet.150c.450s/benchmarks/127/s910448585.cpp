#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int len=s.size();
		set<string> se;
		se.insert(s);
		for(int j=1;j<len;j++){
			string s1,s2;
			s1=s.substr(0,j);
			s2=s.substr(j,len-j);
			int l1=s1.size(),l2=s2.size();
			string s1r=s1,s2r=s2;
			for(int k=0;k<l1;k++){
				s1r[k]=s1[l1-k-1];
			}
			for(int k=0;k<l2;k++){
				s2r[k]=s2[l2-k-1];
			}
			se.insert(s1+s2r);
			se.insert(s1r+s2);
			se.insert(s1r+s2r);
			se.insert(s2+s1);
			se.insert(s2r+s1);
			se.insert(s2+s1r);
			se.insert(s2r+s1r);
		}
		cout<<se.size()<<endl;
	}

    return 0;
}