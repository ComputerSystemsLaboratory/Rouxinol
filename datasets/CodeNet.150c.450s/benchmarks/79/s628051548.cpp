#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <functional>
using namespace std;
typedef pair<int,int> mypair;

int main(void){
int n,r;
while(1)
{
cin>>n>>r;
if(n==0)break;
vector<mypair> huda(n);
mypair temp;
for(int i=0;i<n;i++){
	temp.first=n-i;
temp.second=n-i;
huda[i]=temp;
}


int p,c;
for(int i=0;i<r;i++){
	cin>>p>>c;
	for(int j=0;j<p-1;j++)
	huda[c+j].first=huda[j].second;
	for(int j=0;j<c;j++)
	huda[j].first=huda[p-1+j].second;
	for(int j=0;j<n;j++){
		huda[j].second=huda[j].first;
	}
	
}
//for(int i=0;i<n;i++)
//cout<<huda[i].first<<' '<<huda[i].second<<endl;
cout<<huda[0].second<<endl;
}
return 0;
}