#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int n;cin>>n && n;){
		int prev=0,res=0;
		int l=0,r=0;
		while(n--){
			string s; cin>>s;
			if(s=="lu") l=1;
			if(s=="ru") r=1;
			if(s=="ld") l=0;
			if(s=="rd") r=0;
			if(l==r && l!=prev)
				prev=l,res++;
		}
		cout<<res<<endl;
	}
}