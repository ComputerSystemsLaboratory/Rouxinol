#include<bits/stdc++.h>

using namespace std;

int main() {

   string str;
   while(1){
   int sum=0;

   cin>>str;
   if(str.size()==1 && str[0]=='0')return 0;
   for(int i=0;i<str.size();i++){
    sum=sum+str[i]-'0';
   }
   cout<<sum<<endl;
   }


}

