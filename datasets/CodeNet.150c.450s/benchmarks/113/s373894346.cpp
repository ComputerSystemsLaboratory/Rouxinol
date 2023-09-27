#include<iostream>
#include<sstream>
using namespace std;
int main(){
int i,a;
stringstream s;
for(i=1;;i++){
cin>>a;
if(a==0)break;
s<<"Case "<<i<<": "<<a<<endl;
}
cout<<s.str();
return 0;
}