#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define PI 2*acos(0.0)
#define boost ios::sync_with_stdio(false);cin.tie(0)
/*ll arr[1000000];void seive(){memset(arr,1,sizeof(arr));arr[0]=arr[1]=0;for(ll i=2;i<=(sqrt(1000000));i++){if(arr[i]){for(ll j=(i+i);j<=1000000;j+=i){arr[j]=0;}}}}*/
int main()
{
 boost;
 ll t;
 cin>>t;
 map <string,int> mp;
 while(t--)
 {
     string str;
     cin>>str;
     mp[str]++;
 }
 cout<<"AC x "<<mp["AC"]<<endl<<"WA x "<<mp["WA"]<<endl<<"TLE x "<<mp["TLE"]<<endl<<"RE x "<<mp["RE"]<<endl;
 
}