#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    string a,b;
    cin>>a>>b;
    a+=a;
    bool s=false;
    for(int c=0;c<a.length()/2+5;c++){
	for(int d=0;d<b.length();d++){
	    if(a[c+d]!=b[d])break;
	    if(b.length()-1==d)s=true;
	    }
	}
	if(s)printf("Yes\n");
	else printf("No\n");
}