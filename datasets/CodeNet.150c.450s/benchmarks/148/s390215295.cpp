#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
  cin>>n;
  map<string, int> m;
  string s;
  for(int i = 0 ; i < n ; i++){
  	cin>>s;
    m[s]++;
  }
  cout<<"AC x "<<m["AC"]<<endl;
  cout<<"WA x "<<m["WA"]<<endl; 
  cout<<"TLE x "<<m["TLE"]<<endl;
  
  cout<<"RE x "<<m["RE"]<<endl;
    
}