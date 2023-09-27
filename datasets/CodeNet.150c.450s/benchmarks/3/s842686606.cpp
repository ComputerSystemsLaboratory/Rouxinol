#include<bits/stdc++.h>
using namespace std;

int main(){
string s,o,w;
int n,a,b;
cin>>s>>n;
for(int x=0;x<n;x++){

cin>>o>>a>>b;

if(o=="print"){
cout<<s.substr(a,b-a+1)<<endl;
}

if(o=="reverse"){
for(int i=a,j=b;i<j;i++,j--){
swap(s[i],s[j]);
}}

if(o=="replace"){
cin>>w;
s=s.substr(0,a)+w+s.substr(b+1);
}


}

return 0;
}
