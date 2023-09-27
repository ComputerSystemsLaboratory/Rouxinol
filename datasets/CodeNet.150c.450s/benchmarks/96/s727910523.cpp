#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define ck(n,a,b) (a<=(n)&&(n)<b)
using namespace std;

int main(){
	int N;
	cin>>N;
	string keitai[10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	while(N--){
		string s;
		cin>>s;

		string ans="";
		int b=0,c=0;
		REP(i,0,(int)s.size()){
			if(s[i]=='0'){
				if(b!=0){
					int num=(c+keitai[b].size()-1)%keitai[b].size();
					ans.push_back(keitai[b][num]);
					b=0,c=0;
				}
			}
			else{
				b=s[i]-'0';
				c++;
			}
		}
		p(ans);
	}
	return 0;
}