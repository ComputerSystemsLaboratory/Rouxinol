/**********************************************************************************************
******************************AUTHOR:**********************************************************
****************************ASHISH RANJAN******************************************************
***********************************************************************************************/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<chrono>
#include<vector>
#include<string>
#include<cstring>
#include <iomanip>
using namespace std;
using namespace std::chrono;
/*
auto start = high_resolution_clock::now();
auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
*/
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(i,n) for(int i=0;i<(int)n;i++)
#define frs(i,a,b) for(int i = a;i<b;i++)
#define meme(a,b,c) memset(a,b,sizeof(c)); //works only for 0 and -1
bool isPrime(int x){
for(int i=2;i*i<=x;i++){
if(x%i==0)return false;
}
  return true;
}
int main(){
  fast();
 ll n;
  cin>>n;
  int count_ac=0,count_wa=0,count_tle=0,count_re=0;
  for(int i=0;i<n;i++){
  string k;cin>>k;
    if(k=="AC")count_ac++;
    if(k=="WA")count_wa++;
    if(k=="TLE")count_tle++;
    if(k=="RE")count_re++;
  }
  cout<<"AC"<<" x "<<count_ac<<endl;
  cout<<"WA"<<" x "<<count_wa<<endl;
  cout<<"TLE"<<" x "<<count_tle<<endl;
  cout<<"RE"<<" x "<<count_re<<endl;
 return 0;
  
}


