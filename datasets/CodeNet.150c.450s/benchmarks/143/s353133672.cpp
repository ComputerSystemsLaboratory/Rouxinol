#include <bits/stdc++.h>
#define lli long long int
#define pb(a) push_back(a)
#define forr(a,n) for(lli i=a;i<n;i++)
#define forrr(j,a,n) for(lli j=a;j<n;j++)
#define all(x) x.begin(),x.end()
#define mp make_pair
#define ff first
#define ss second
#define pi2  1.57079632679489661923

using namespace std;


void print(lli a[],lli n){
forr(0,n){cout<<a[i]<<" ";}
cout<<"\n";
}
lli power1(lli x){
lli u=0;
while(x>0){
    u++;
    x=x/2;
}
return u;
}

lli powM(lli x,lli y,lli m)
{
    if(m==1){return 0;}
    lli ans=1,r=1;
    x%=m;
    while(r>0&&r<=y)
    {
        if(r&y)
        {
            ans*=x;
            ans%=m;
        }
        r<<=1;
        x*=x;
        x%=m;
    }
    return ans;
}
int powm(lli a, lli b) {
	lli res = 1;
	while (b) {
		if (b & 1)
			res = (res * a);
		a = (a * a);
		b >>= 1;
	}
	return res;
}
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
/*
vector <lli> adj[200001];
lli vis[200001];
void dfs(lli a){
    vis[a]=1;
    forr(0,adj[a].size()){
    if(vis[adj[a][i]]){continue;}
    else{
        dfs(adj[a][i]);
    }
    }
}

lli level[100001];
void bfs(lli a){
queue <lli> q;
vis[a]=1;
level[a]=0;
q.push(a);
while(!q.empty()){
    lli p=q.front();
    q.pop();
    forr(0,adj[p].size()){
    if(vis[adj[p][i]]==0){
        level[adj[p][i]]=level[p]+1;
        q.push(adj[p][i]);
        vis[adj[p][i]]=1;
    }
    }

}

}

vector <pair<lli,lli> > dj[200001];
lli dist[200001];
void dijkstra(lli a){
dist[a]=0;
multiset<pair<lli,lli> > s;
s.insert({0,a});
while(s.size()!=0){
    lli x=(*s.begin()).second;
    s.erase(s.begin());
    if(vis[x]){continue;}
    vis[x]=1;
    forr(0,dj[x].size()){
    lli e=dj[x][i].first;
    lli we=dj[x][i].second;
    if(dist[x]+we<dist[e]){
        dist[e]=dist[x]+we;
        s.insert({dist[e],e});
    }
    }
}

}*/
/*
lli s[10000001];
void sieveOfEratosthenes(lli N)
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries in it as false.
    //https://www.geeksforgeeks.org/print-all-prime-factors-and-their-powers/?ref=rp
    vector <bool> prime(N+1, false);

    // Initializing smallest factor equal to 2
    // for all the even numbers
    for (lli i=2; i<=N; i+=2)
        s[i] = 2;

    // For odd numbers less then equal to n
    for (lli i=3; i<=N; i+=2)
    {
        if (prime[i] == false)
        {
            // s(i) for a prime is the number itself
            s[i] = i;

            // For all multiples of current prime number
            for (lli j=i; j*i<=N; j+=2)
            {
                if (prime[i*j] == false)
                {
                    prime[i*j] = true;

                    // i is the smallest prime factor for
                    // number "i*j".
                    s[i*j] = i;
                }
            }
        }
    }
}

void generatePrimeFactors(lli N)
{
    // s[i] is going to store smallest prime factor
    // of i.

    // Filling values in s[] using sieve

    lli curr = s[N];  // Current prime factor of N
    lli cnt = 1;   // Power of current prime factor

    // Printing prime factors and their powers
    while (N > 1)
    {
        N /= s[N];

        // N is now N/s[N].  If new N als has smallest
        // prime factor as curr, increment power
        if (curr == s[N])
        {
            cnt++;
            continue;
        }
        // Update current prime factor as s[N] and
        // initializing count as 1.
        curr = s[N];
        cnt = 1;
    }
}
*/
/*
lli m1 =1e9+7;
void multiply(lli F[2][2], lli M[2][2]);
void power(lli F[2][2], lli n);
lli fib(lli n)
{
    lli F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);

    return F[0][0];
}

// Optimized version of power() in method 4
void power(lli F[2][2], lli n)
{
    if(n == 0 || n == 1)
       return;
    lli M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

void multiply(lli F[2][2], lli M[2][2])
{
    lli x = ((F[0][0] * M[0][0])%m1 + (F[0][1] * M[1][0])%m1)%m1;
    lli y = ((F[0][0] * M[0][1])%m1 + (F[0][1] * M[1][1])%m1)%m1;
    lli z =((F[1][0] * M[0][0])%m1 + (F[1][1] * M[1][0])%m1)%m1;
    lli w = ((F[1][0] * M[0][1])%m1 + (F[1][1] * M[1][1])%m1)%m1;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
*/


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
   //freopen("in.txt","r",stdin);
   //freopen("output.txt","w",stdout);
int t2=1;
//cin>>t2;
lli M =998244353 ;
while(t2--){
lli n,q;
cin>>n;
lli a[n];
lli u=0;
forr(0,n){cin>>a[i];u+=a[i];}
cin>>q;
map<lli,lli> m;
forr(0,n)
{
    if(m.find(a[i])==m.end()){m[a[i]]=1;}
    else{m[a[i]]++;}
}
while(q--){
    lli b,c;
    cin>>b>>c;
    if(m.find(b)==m.end()){cout<<u<<"\n";}
    else{
        u+=m[b]*(c-b);
        if(m.find(c)==m.end()){m[c]=m[b];}
        else{m[c]+=m[b];}
        m[b]=0;
        cout<<u<<"\n";
    }
}

}
     return 0;
}
