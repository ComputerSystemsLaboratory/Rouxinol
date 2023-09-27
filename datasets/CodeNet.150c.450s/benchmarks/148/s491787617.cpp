#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int n;
    cin>>n;
    string s1="AC",s2="WA",s3="TLE",s4="RE";
    map<string,int> mp;
    for (int i = 0; i < n; i++)
    {
      string s;
      cin>>s;
      mp[s]++;
    }
    cout<<s1<<" "<<"x"<<" "<<mp[s1]<<"\n";
    cout<<s2<<" "<<"x"<<" "<<mp[s2]<<"\n";
    cout<<s3<<" "<<"x"<<" "<<mp[s3]<<"\n";
    cout<<s4<<" "<<"x"<<" "<<mp[s4]<<endl;
    
    
    
 
    
   
	
	return 0;
}