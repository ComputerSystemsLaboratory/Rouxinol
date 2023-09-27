#include<iostream>
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
void print(int num){
	cout<<num<<endl;
}
int main()
{
#ifdef DEBUG
	freopen("in", "r", stdin);
//	freopen("out", "w", stdout);
#endif
	int a,b;
	char op;
	while(scanf("%d %c %d",&a,&op,&b)!=EOF&&op!='?'){
		switch(op){
			case '+':
				print(a+b);
				break;
			case '-':
				print(a-b);
				break;
			case '*':
				print(a*b);
				break;
			case '/':
				print(a/b);
				break;
		}
	}
	
	//insert code
	return 0;
}
//aoj1_4.cc