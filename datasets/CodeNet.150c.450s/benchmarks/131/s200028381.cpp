#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int used[1000005];

int main(){
	int n,m;
	int i,j,k;
	int a,b,c;
	string sa;
	while(cin>>n>>m){
		if(!m)break;
		memset(used,-1,sizeof(used));
		used[n]=0;
		sa=to_string(n);
		while(sa.size()<m)sa+='0';
		for(i=1;i<30;i++){
			sort(sa.begin(),sa.end());
			a=stoi(sa);
			sort(sa.rbegin(),sa.rend());
			b=stoi(sa);
			if(used[b-a]!=-1)break;
			used[b-a]=i;
			sa=to_string(b-a);
			while(sa.size()<m)sa+='0';
		}
		cout<<used[b-a]<<" "<<b-a<<" "<<i-used[b-a]<<endl;
	}
}

