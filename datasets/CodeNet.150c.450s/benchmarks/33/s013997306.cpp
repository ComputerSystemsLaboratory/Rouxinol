#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int x,y,s;
	while(cin>>x>>y>>s&&x&&y&&s){
		int p1,p2,maxx,maxy=0,maxz;
		for(p1=1;p1<s;p1++){
		   for(p2=p1;p2<s;p2++){
		       maxx=p1*(100+x)/100+p2*(100+x)/100;
		       if(maxx==s){
		          maxz=p1*(100+y)/100+p2*(100+y)/100;
		          maxy=max(maxy,maxz);
             }
	       }
		}
	   cout<<maxy<<endl;
	}
}