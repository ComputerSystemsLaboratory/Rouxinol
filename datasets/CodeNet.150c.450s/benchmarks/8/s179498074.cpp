#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int a,b,c;
	a=b=0;
	cin>>c;
	for(int d=0;d<c;d++){
		string e,f;
		cin>>e>>f;
		if(e==f){a++;b++;}
		else {
			vector<string>g(2);
			g[0]=e;g[1]=f;
			sort(g.begin(),g.end());
			if(e==g[0])b+=3;
			else a+=3;
			}
		}
		cout<<a<<" "<<b<<endl;
}