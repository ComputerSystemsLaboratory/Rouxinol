#include<iostream>
#define mp make_pair
#include<cstdio>
#define MAX 86400
#include<map>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;
typedef pair<int,int> P;
int main(){
	int n,l,a;
	char s[20];
	P table[20000];
	while(cin>>n,n){
		for(int i=0;i<n;i++){
			cin>>s;
			l=atoi(s)*3600+atoi(&s[3])*60+atoi(&s[6]);
			table[i]=P(l,1);
			cin>>s;
			a=atoi(s)*3600+atoi(&s[3])*60+atoi(&s[6]);
			table[i+n]=P(a,0);
		}
		int now=0,ans=0;
		sort(table,table+2*n);
		for(int i=0;i<2*n;i++){
			if(table[i].second)
			now++;
			else now--;
			ans=max(now,ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}