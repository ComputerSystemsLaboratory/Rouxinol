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
int cnt[30];
int main()
{
#ifdef DEBUG
	freopen("in", "r", stdin);
//	freopen("out", "w", stdout);
#endif
	char c;
	memset(cnt,0,sizeof(cnt));
	while((c=getchar())!=EOF){
//		cout<<c;
		c=toupper(c);
		if(isalpha(c)){
			cnt[islower(c)?c:tolower(c)-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		printf("%c : %d\n",'a'+i,cnt[i]);
	}
	
	//insert code
	return 0;
}
//aoj1_8_c.cc