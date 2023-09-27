#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
using namespace std;

int main(){
map<string,int> hito;
int n,m;
string s;
cin>>n;
for(int q=0;q<n;q++){
cin>>s;
hito[s]=1;
}
cin>>m;
int j=0;
for(int q=0;q<m;q++){
cin>>s;
if(hito.find(s)==hito.end()) cout<<"Unknown "<<s<<endl;
else{
if(j%2==1)cout<<"Closed by "<<s<<endl;
else cout<<"Opened by " <<s<<endl;
j++;
}
}


return 0;
}