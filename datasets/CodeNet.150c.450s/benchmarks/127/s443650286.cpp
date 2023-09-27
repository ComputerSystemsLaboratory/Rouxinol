#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n; cin>>n;
	while(n--){
		string s; cin>>s;
		set<string> se;
		for(int i=1;i<s.size();i++){
			string s1[2]={s.substr(0,i),string(s1[0].rbegin(),s1[0].rend())};
			string s2[2]={s.substr(i),string(s2[0].rbegin(),s2[0].rend())};
			for(int j=0;j<2;j++)
				for(int k=0;k<2;k++){
					se.insert(s1[j]+s2[k]);
					se.insert(s2[k]+s1[j]);
				}
		}
		cout<<se.size()<<endl;
	}
	
	return 0;
}