#include<iostream>
#include<set>
#include<string>
using namespace std;

string rev(string s){
	string res="";
	for(int i=s.size()-1;i>=0;i--){
		res+=s[i];
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	for(int z=0;z<n;z++){
		int count=0;
		string s;
		cin>>s;
		set<string> S;
		for(int i=1;i<s.size();i++){
			string s1=s.substr(0,i),s2=s.substr(i);
			if(!S.count(s1+s2)){
				S.insert(s1+s2);
				count++;
			}
			if(!S.count(s1+rev(s2))){
				S.insert(s1+rev(s2));
				count++;
			}
			if(!S.count(rev(s1)+s2)){
				S.insert(rev(s1)+s2);
				count++;
			}
			if(!S.count(rev(s1)+rev(s2))){
				S.insert(rev(s1)+rev(s2));
				count++;
			}
			swap(s1,s2);

			if(!S.count(s1+s2)){
				S.insert(s1+s2);
				count++;
			}
			if(!S.count(s1+rev(s2))){
				S.insert(s1+rev(s2));
				count++;
			}
			if(!S.count(rev(s1)+s2)){
				S.insert(rev(s1)+s2);
				count++;
			}
			if(!S.count(rev(s1)+rev(s2))){
				S.insert(rev(s1)+rev(s2));
				count++;
			}

		}

		cout<<count<<endl;

	}
}