#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
string s;
int a,b;
void print(){
	for(int i=a;i<=b;i++){
		cout<<s[i];
	}
	cout<<endl;
}
void rev(){
	while(a<b){
		swap(s[a],s[b]);
		a++;b--;
	}
}
void rep(string &tmp){
	s.replace(a,b-a+1,tmp);
}
int main()
{
//#ifdef DEBUG
//	freopen("in", "r", stdin);
////	freopen("out", "w", stdout);
//#endif
	
	s.clear();
	cin>>s;
	int n;
	cin>>n;
	string t;
	while(n--){
		cin>>t;
		cin>>a>>b;
		switch(t[2]){
			case'i'://print
				print();
				break;
			case'v'://reverse
				rev();
				break;
			case'p'://replace
				string tmp;
				cin>>tmp;
				rep(tmp);
				break;
				
		}
		
	}
	//insert code above
	return 0;
}
//1_9_d.cc