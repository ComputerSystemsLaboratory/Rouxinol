#include <cstdio>
#include <vector>

using namespace std;

int main(){
vector<int> data(101,0);
int v;
while(scanf("%d",&v)!=-1)data[v]++;
int mxvl=0;
vector<int> res;
for(int i=0;i<=100;++i){
if(mxvl < data[i]){
mxvl = data[i];
res.clear();
}
if(mxvl == data[i])res.push_back(i);
}
for(int i=0;i<res.size();++i)printf("%d\n",res[i]);
return 0;
}