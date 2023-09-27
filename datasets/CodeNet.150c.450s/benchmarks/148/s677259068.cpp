#include<bits/stdc++.h>
 
using namespace std;
#define MAXN   1000001 

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;

map<string,int>mp;

for(int i=0;i<n;i++)
{
	string s;
	cin>>s;
	mp[s]++;
}

cout<<"AC"<<" x "<<mp["AC"]<<endl;
cout<<"WA"<<" x "<<mp["WA"]<<endl;
cout<<"TLE"<<" x "<<mp["TLE"]<<endl;
cout<<"RE"<<" x "<<mp["RE"]<<endl;

}

 
 

 
