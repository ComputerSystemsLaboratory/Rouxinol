#include <iostream>
using namespace std;
int main(){
    int n,i,tail;
    char s;
    char dic[256];
    while(cin>>n,n){
	    for(i=0;i<256;i++) dic[i]=i;
	    while(n--){
		    cin>>s;
		    cin>>dic[(int)s];
	    }
	    cin>>n;
	    while(n--){
		    cin>>s;
		    cout<<dic[(int)s];
	    }
	    cout<<endl;
    }
}