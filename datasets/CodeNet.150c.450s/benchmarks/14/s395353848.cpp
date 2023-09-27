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
int main()
{
#ifdef DEBUG
	freopen("in", "r", stdin);
//	freopen("out", "w", stdout);
#endif
	int n;
	scanf("%d",&n);;
	int i=1;
	for(;;){
		int x=i;
		if(x%3==0){
			cout<<" "<<i;
		}
		else {
			for(;;){
				if(x%10==3){
					cout<<" "<<i;
					break;
				}
				else {
					x/=10;
					if(!x)break;;
					}
			}
		}
		if(++i>n)break;
	}
		cout<<endl;
		
		//insert code
		return 0;
	}
	//aoj1_5_d.cc