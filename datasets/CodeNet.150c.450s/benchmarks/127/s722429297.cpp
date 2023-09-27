#include<iostream>
#include<cstdio>
#include<string>
#include<set>
using namespace std;
int main()
{
	int N;
	string S;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		cin >> S;
		set<string>ans;
		for(int j=1;j<S.length();j++){
			string S1,S2;
			for(int k=0;k<j;k++){
				S1+=S[k];
			}
			for(int k=j;k<S.length();k++){
				S2+=S[k];
			}
			ans.insert(S1+S2);
			ans.insert(S2+S1);
				S1="";S2="";
			for(int k=j-1;k>=0;k--){
				S1+=S[k];
			}
			for(int k=j;k<S.length();k++){
				S2+=S[k];
			}
			ans.insert(S1+S2);
			ans.insert(S2+S1);
			S1="";S2="";
			for(int k=j-1;k>=0;k--){
				S1+=S[k];
			}
			for(int k=S.length()-1;k>=j;k--){
				S2+=S[k];
			}
			ans.insert(S1+S2);
			ans.insert(S2+S1);
			S1="";S2="";
			for(int k=0;k<j;k++){
				S1+=S[k];
			}
			for(int k=S.length()-1;k>=j;k--){
				S2+=S[k];
			}
			ans.insert(S1+S2);
			ans.insert(S2+S1);
		}
		printf("%d\n",ans.size());
	}
}