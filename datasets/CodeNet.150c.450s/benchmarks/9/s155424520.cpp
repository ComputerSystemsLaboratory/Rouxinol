#include<bits/stdc++.h>
using namespace std;

int main(){

string w;
while(cin>>w){
if(w=="-"){break;}
int m;
cin>>m;

for(int i=0;i<m;i++){
int h;
cin>>h;
w=w.substr(h)+w.substr(0,h);
}
cout<<w<<endl;
}

return 0;
}
