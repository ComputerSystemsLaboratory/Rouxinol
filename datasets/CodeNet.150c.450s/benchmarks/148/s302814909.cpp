#include <bits/stdc++.h>
 
#define ll long long int
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define rep(i,a,b)	for(ll  i=a;i<b;i++)
#define hello777 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <string>
#define pie 3.14159265358979323846
constexpr int MOD = 1e9+7;
const int MAX= 1e5+5;
using namespace std;


//ll gcd(int a, int b)
//{ 
//    if (a == 0) 
//        return b;  
//    return gcd(b % a, a);  
// } 
// 
//ll lcm(int a, int b)  
// {  
//    return a/gcd(a, b) *b;  
// }
//  
//int prime(int n)
//{
//	rep(i,2,n+1)
//	{
//		if(n%i==0)return i;
//	}
//	
//vector<unordered_set<int> > prime_factors(MAX,unordered_set<int>());
//int primes[MAX];
//int prefix[MAX][6];
//void sieve(){
//    //primes i stores the largest prime factor of a number....
//    for(int i=2;i<MAX;++i){
//        if(primes[i]!=0){
//            continue;
//        }
//        primes[i] = i;
//        for(int j=2*i;j<MAX;j+=i){
//            primes[j] = i;
//        }
//    }
//    
//    for(int i=2;i<MAX;++i){
//        int current = i;
//        
//        while(current!=1){
//            prime_factors[i].insert(primes[current]);
//            current = current/primes[current];
//        }
//    }
//    
//    for(int i=1;i<MAX;++i){
//        for(int k=1;k<=5;++k){
//            prefix[i][k] = prefix[i-1][k] + (prime_factors[i].size()==k);
//        }
//    }
//    
//}
void solve() 
{
	map<string ,int>m;
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		m[s]++;
	}
	cout<<"AC x "<<m["AC"]<<endl;
	cout<<"WA x "<<m["WA"]<<endl;
	cout<<"TLE x "<<m["TLE"]<<endl;
	cout<<"RE x "<<m["RE"]<<endl;
}



int main()
{
	hello777;

	int q=1;
	
//    cin>>q;
    while(q--)
    {   
      solve();
    }
}

 