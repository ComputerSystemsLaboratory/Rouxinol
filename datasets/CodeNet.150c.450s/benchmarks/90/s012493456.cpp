#include <stdio.h>
#include <map>
using namespace std;
int main() {map<int,int>RB;int i,j;map<int,int>::iterator it;while(scanf("%d",&i)!=EOF) {if (RB.count(i)) RB[i]++; else RB[i]=1;}
for (j=0,it=RB.begin();it!=RB.end();it++) if (j<(it->second)) j=it->second;for (it=RB.begin();it!=RB.end();it++) if ((it->second)==j) printf("%d\n",it->first);return 0;}