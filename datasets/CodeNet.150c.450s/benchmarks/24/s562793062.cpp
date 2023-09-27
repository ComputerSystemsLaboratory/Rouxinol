

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <stack>
using namespace std;
 
int dx[8]={1,-1,0,0,1,1,-1,-1};
int dy[8]={0,0,1,-1,-1,1,-1,1};
 
 
int main() {
int n,m;
int pr,di;
while(cin>>n>>m && n){
int ans=0;
vector<pair<int,int> > ve;
for(int i=0;i<n;i++){
cin>>di>>pr;
ve.push_back(make_pair(pr,di));
ans=ans+pr*di;
}
sort(ve.begin(),ve.end(),greater<pair<int,int> >());
for(int i=0;i<n;i++){
if(m<=0) break;
else if(m<=ve[i].second){
ans=ans-ve[i].first*m;
m=0;
}
else{
ans=ans-ve[i].first*ve[i].second;
m=m-ve[i].second;
}


}

cout<<ans<<endl;
}

	return 0;
 
   }