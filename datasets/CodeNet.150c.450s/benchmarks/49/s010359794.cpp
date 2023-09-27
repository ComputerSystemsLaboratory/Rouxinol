#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
#include<functional> 
#include<cassert>
#include<numeric> // std::accumulate(vec.begin(),vec.end(),0) sum of element
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<map>
#include<set>


using namespace std;


typedef long long ll;
typedef std::pair<int, int> P;
typedef vector<int> vi;


#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define all(c) c.begin(),c.end()
#define show(x) cout << #x << " = " << x << endl

#define fi first
#define se second
#define pb push_back



#define DEBUG


// void print_vector(const std::vector<int> &t);
// void unique_vector(std:: vector<int> &t);

template <class X>
void print_vector(const std::vector<X> &t);
template <class X>
void unique_vector(std:: vector<X> &t);


int n, m;

int main(){

  int n;
  vi ans;
  while(true){
    cin >> n;
    if(n == 0) break;
    vi sc(n);
    for(auto &i : sc) cin >> i;
    sort(sc.begin(), sc.end());
    sc.erase(sc.begin());
    sc.erase(sc.end()-1);
    int t = accumulate(sc.begin(), sc.end(), 0) / (n-2);
    ans.pb(t);
  }
  for(auto &i : ans) cout << i << endl;
}

template <class X>
void unique_vector(std::vector<X> &t)
{
  std::sort(t.begin(), t.end());
  t.erase( std::unique(t.begin(), t.end()), t.end() );
}

template <class X>
void print_vector(const std::vector<X> &t){
  for(auto itr=t.begin(); itr != t.end(); itr++){
    std::cout << *itr;
    if(itr != t.end()-1) std::cout << ' ';
  }
  std::cout << std::endl;
}