#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int x,y,s,ma,d,pa;
	while(cin>>x>>y>>s){
		if(x==0&&y==0&&s==0) break;
		ma=0;
		for(int s1=1;s1<s;s1++){
			for(int s2=1;s2<s;s2++){
				d=s1*(100+x)/100+s2*(100+x)/100;
				if(d==s){
					pa=s1*(100+y)/100+s2*(100+y)/100;
					ma=max(ma,pa);
				}
			}
		}
		cout<<ma<<endl;
	}
    return 0;
}