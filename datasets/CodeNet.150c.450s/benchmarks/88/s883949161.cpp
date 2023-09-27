#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
typedef pair<int, pair<int,int> > mypair;
int main(void){
vector<mypair> a;
	while(1){
int h,w;
cin>>h>>w;
if(h==0)break;
int s=h*h+w*w;
bool f=false;
int ah,aw,sa=150*150;

for(int j=1;j<150;j++){
	for(int i=j+1;i<=150;i++)
	{
	int s2=i*i+j*j;
	if(s==s2&&h!=j&&h!=i&&h<j){
	f=true;
	ah=j;
	aw=i;
	break;
	}
	if(s<s2){
	if(sa>s2){
		ah=j;
		aw=i;
		sa=s2;
	}
	break;
	}

	}

	if(f)break;	
	}
cout<<ah<<' '<<aw<<endl;
	}

return 0;
}

