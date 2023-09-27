#include<bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma GCC optimize "trapv"
#define _GLIBCXX_DEBUG
#define ll long long int
#define ld long double
#define ull unsigned long long int  // ranges from (0 - twice of long long int)
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define mod 1000000007LL
#define llpair pair<ll,ll>
#define INF 1000000000000000000ll
#define np next_permutation
#define PI acos(-1)
#define deb(x) cout<<#x<<" "<<x<<endl;
#define rotate_left(vec,amt) rotate(vec.begin(),vec.begin()+amt,vec.end());
#define rotate_right(vec,amt) rotate(vec.begin(),vec.begin()+vec.size()-amt,vec.end());
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define clr(x) memset(x,0,sizeof(x))
//ALWAYS USE ll DATA TYPE FOR INTEGER(FASTER THAN INTEGER AS WELL AS SOMETIMES WITHOUT USE LONG UR ANSWER WILL NOT ACCEPTED) && DOUBLE FOR DECIMAL VALUE
template<typename T> // for removing front element from the vector
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}
template<typename R> // for removing back element from the vector or can directly
void pop_back(std::vector<R> &v) // use vec.pop_back() function...
{
    if (v.size() > 0) {
        v.erase(v.begin()+v.size()-1);
    }
}

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

bool isPerfectSquare(long double x)
{
  //long double sr = sqrt(x);
  //return ((sr - floor(sr)) == 0);
  return (ceil(sqrt(x))==floor(sqrt(x)));
 
}

bool isprime(ll n)  //IN  O(sqrt(n))
{
    if(n<=1) return false;
    for(ll i=2;i*i<=n;i++)
        if(n%i==0)
            return false;

    return true;
}

void prime_factors(ll n)
{
	
	for(ll i=2;i*i<=n;i++)
	{
		
		if(n%i==0)
		{
			ll count=0;
			while(n%i==0)
			{
				count++;
				n=n/i;
			}
			
			cout<<i<<" "<<"^"<<" "<<count<<"\n";
		}
		
	}
	if(n>1)
	cout<<n<<" "<<"^"<<" "<<1<<"\n";
}


vector<ll> divisors(ll n){    //IN  O(sqrt(n))

    vll v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.pb(i);
            if((n/i)!=i)
            v.pb(n/i);
        }
    }
    return v;
}

ll power(ll a, ll n, ll m)  // using Binary Exponential in TC O(logn)
{                     // Self Written By </ME> :)
    ll res=1;
    while(n)
    {
        if(n%2) 
        res=(res*a)%m ,n--;
        else
        a=(a*a)%m ,n/=2;
    }
    return res;
}

ll ts(ll arr[],int l,int r,int x) // ternary search to find x in sorted array arr
{
    
    while(l<=r)
    {
        ll mid1= l+(r-l)/3;
        ll mid2= r -(r-l)/3;
        if(arr[mid1]==x || arr[mid2]==x)
            return 1;
        if(x<arr[mid1])
            r=mid1-1;
        else if(x>arr[mid2])
            l=mid2+1;
        else
        {
            l=mid1+1;
            r=mid2-1;
        }
    }

    return -1;
}


ll modulo_inverse(ll a, ll m)   // using little fermat theorem // Work in log(n) Time Complexity
{
	// Note:-> For calculating the modular inverse use power(a,m-2,m) as parameters values 
	// (condition is m should be prime and m & a must be coprime.)
	ll res=power(a,m-2,m); 
	return res;
}




ll Extended_gcd(ll a, ll b, ll &x, ll &y)   // Simple Use is to find the coefficients of a,b if ax + by = gcd(a,b) is satisfying...:)
{
	if(b==0)
	{
		x=1;
		y=0; return a;
	}
	
	ll x1,y1;
	ll g = Extended_gcd(b,a%b,x1,y1);
	
	// value we get here
	x= y1;
	y= x1 - (a/b)*y1;
	
	return g;
}

vector<ll> count_freq(string &str ,string &substr)
{
	 //This code is used to count the frequency of particular substring in a given string using the found function
	vector<ll>pos;
	size_t found = str.find(substr,0);
	while(found!=string::npos)
	{
		pos.pb(found);    // position storing is 0 based indexing add 1 if required 1 based indexing.
		found=str.find(substr,found+1);
		
	}
	
	return pos;
	
}


/*
// ############# DISJOINT SET FUNCTIONS ##############


###################ABOUT FIND FUNCTION IN DISJOINT SET -> work always is to return the parent of the set nothing it has to do
// In set you can't join one element to another element or linked any element to other element except
// the parent node, it means only parent Node Can Be Edditable In A SET
    
    
int find(ll n)
{
    if(parent[n]<0)
        return n;
    else
        return find(parent[n]); 
}

//############################### I LOVE UNION BY RANK ############## UMMMHHHHHHHH ###############
// If You are Only doing Union By Rank then there is no need to apply path compression baby
//  logic is simple that don't try to need the length of the tree large as much but instead of that make it as a logn by checking
// everytime the rank of element element during insertion

// ############### either do UNION BY RANK OR PATH COMPRESSION####################  
void uni(ll a,ll b)
{
    
    if(R[a]>R[b])
    {
        parent[a]+=parent[b];
        R[a]+=R[b];
        parent[b]=a;
    }
    else
    {
        parent[b]+=parent[a];
        R[b]+=R[a]; 
        parent[a]=b;
    }

    
}    
    
*/

/*   1.   Binary/Hexa/Octa to interger or decimal ->>>>>>  int d =stoi(s,nullptr,2); 

  
  	 2.	  Now Another is Decimal/Interger to Binary->>>>>  string k =bitset<32>(128).to_string();  
  	  
  	 3.   Distance function is used to calculate the distance between the 2 position of the itterator in c++ STL
 */


// It doesn't matter how Slowly you go,as long as you do not stop.
// I Just want to Enjoy and improve my Problem Solving.
// Rating Always must be Like HEARTBEAT i.e., If it stops fluctuating it means {YOU ARE DEAD!!!!!}.
// PLEASE READ THE QUESTION CAREFULLY, AND PLEASE GIVE 100% ATTENTION WHILE WRITING YOUR CODE.
 
// YOU DON'T HAVE TO BE GREAT TO START,
//BUT HAVE TO START TO BE GREAT.

int main() {
    auto start = chrono::high_resolution_clock::now();
    fio;
    ll t=1; 
    //cin>>t;
    while(t--)
    {	
		ll n; cin>>n;
		ll k; cin>>k;
		ll arr[n+1];
		rep(i,1,n+1) cin>>arr[i];
		for(ll i=k+1;i<=n;i++)
		{
			if(arr[i]>arr[i-k])
			cout<<"Yes"<<"\n";
			else
			cout<<"No"<<"\n";
		}
		
		
	}
    auto finish = chrono::high_resolution_clock::now();
    cerr << "Time elapsed: " << (chrono::duration<long double>(finish-start)).count() << "s\n";
    return 0;
        
}

 





	










