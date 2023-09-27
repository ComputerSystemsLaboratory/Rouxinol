#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string s[9]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string ss;
		cin >> ss;
		int cnt=0,now;
		for(int j=0;j<ss.size();j++){
			if(ss[j]-'0'==0){
				if(cnt==0) continue;
				printf("%c",s[now-1][(cnt-1)%s[now-1].size()]);
				cnt=0;
				continue;
			}
			cnt++;
			now=ss[j]-'0';
		}
		printf("\n"); 
	}
}