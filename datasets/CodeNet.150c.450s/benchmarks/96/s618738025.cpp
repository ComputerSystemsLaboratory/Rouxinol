#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;

int n;

string temp[]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		string t[1000];
		bool flag=0;
		int now=0;
		for(int j=0;j<(int)s.length();j++){
			if(s[j]=='0'){
				if(flag){
					now++;
					t[now]="";
					flag=0;
				}
			}else{
				t[now]+=s[j];
				flag=1;
			}
		}
		string ans="";
		for(int j=0;j<now;j++){
			int index=t[j][0]-'1';
			int index2=t[j].length()%temp[index].length();
			if(index2==0)index2=temp[index].length()-1;
			else index2--;
			ans+=temp[index][index2];
		}
		cout<<ans<<"\n";
	}
	return 0;
}