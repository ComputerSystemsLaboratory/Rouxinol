#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<string> s(n);
 for(int i=0; i<n; ++i){
   cin>>s.at(i);
 }
 int AC=0,WA=0,TLE=0,RE=0;
 for(int i=0; i<n; ++i){
   if(s.at(i)=="AC") AC++;
   if(s.at(i)=="WA") WA++;
   if(s.at(i)=="TLE") TLE++;
   if(s.at(i)=="RE") RE++;
 }
  cout<<"AC x "<<AC<<endl;
  cout<<"WA x "<<WA<<endl;
  cout<<"TLE x "<<TLE<<endl;
  cout<<"RE x "<<RE<<endl;

}
