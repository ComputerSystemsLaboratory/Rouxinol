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
string s,p;
char ans[][10] ={
	"No",
	"Yes"
};
bool check(int b){
	int len=s.length();
	for(int i=0;i<p.length();i++){ 
		if(s[(b+i)%len]!=p[i])return 0;
	}
	return 1;
}
bool slove(){
	for(int i=0;i<s.length();i++){
		if(check(i))return 1;
	}
	return 0;
}
int main()
{
//#ifdef DEBUG
//	freopen("in", "r", stdin);
////	freopen("out", "w", stdout);
//#endif
	
	cin>>s>>p;
	printf("%s\n", ans[slove()]);
	//insert code above
	return 0;
}
//aoj1_8_d.cc