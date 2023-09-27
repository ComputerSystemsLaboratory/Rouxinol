#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,i;
    while(cin>>a>>b){
    	for(i=1;i<=7;i++){
    		c=pow(10,i);
    		if((a+b)/c==0){
    			cout<<i<<endl;break;goto p1;
    		}
    	}
    }
    p1:return 0;
}