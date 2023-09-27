#include <bits/stdc++.h>
#define r(p,s) for(int p=0;p<s;p++)
using namespace std;
int main(){
	int i,j,d[100][100],e[100];cin>>i>>j;
	r(a,i)r(b,j)cin>>d[a][b];r(a,j)cin>>e[a];
	r(a,i){
		int sum=0;r(b,j)sum+=d[a][b]*e[b];cout<<sum<<endl;
	}
}