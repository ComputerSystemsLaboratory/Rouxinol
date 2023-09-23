#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    int a,c;
    char b;
    while(cin>>a>>b>>c,b!='?'){
	switch(b){
	    case '+':printf("%d\n",a+c);break;
	    case '-':printf("%d\n",a-c);break;
	    case '*':printf("%d\n",a*c);break;
	    default:printf("%d\n",a/c);break;
	    }
	}
}