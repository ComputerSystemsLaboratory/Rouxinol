
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,i,max=0;
    vector<int> count(100,0);
    while(cin>>a){
        count[a]++;
    }
    for(i=1;i<count.size();i++){
        if(max<count[i])max=count[i];
    }
    for(i=1;i<count.size();i++){
        if(max==count[i])cout<<i<<endl;
    }
          return 0;
}