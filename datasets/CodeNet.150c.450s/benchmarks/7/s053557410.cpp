#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<li> vli;

#define F first
#define S second
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define sz size()
#define all(A)    A.begin(), A.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define f0(i,b)   for(int i=0;i<(b);i++)
#define f1(i,b)   for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define mod 1000000007

#define forr(i,n)    for(i=0; i<n; i++)
#define whilee(i,t)  while(i!=t)
#define  sl(a)  scanf("%lld",&a)
#define  pl(a)  printf("%lld",a)

//for(auto it =A.begin(); it!=A.end(); it++)
//sort(A.begin(),A.end());
//binary_search(A.begin(),A.end(),x);
//reverse(A.begin(), A.end());
//cout << *max_element(A.begin(), A.end());
//cout << *min_element(A.begin(), A.end());
//count(A.begin(), A.end(), X); //counts the occurrences of X
//distance(A.begin(),A.end());  //distance between first to last element
//accumulate(A.begin(), A.end(), 0); //add
//next_permutation(A.begin(), A.end());
//prev_permutation(A.begin(), A.end());
//swap(S[0], T[0]);
//scanf("%d",&x);
//printf("%d\n",x);

//vector <int> A;
//deque <int> A;
//queue <int> A;
//stack <int> A;
//set <int> A;
//map <int,int> A;
//pair <int,int> A ;
//vector <pair <int,int>> A ;
//char ch;
//string S, T, U;
ll i, j, k, a, b, c, d, f, g, h, l, m, n=10, p, q, r, s, t, w, x, y, z, maxx=INT_MIN, minn=INT_MAX, ans=0, sum=0, cnt=0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A[10];

    forr(i,n)
    {
        cin>>A[i];
    }
    sort(A,A+n, greater<>());
    forr(i,3)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}

