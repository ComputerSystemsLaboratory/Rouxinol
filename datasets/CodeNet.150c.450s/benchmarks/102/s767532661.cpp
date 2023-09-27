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


int w, h;

vector<int> xl={-1, 0, 1, 0};
vector<int> yl={0, 1, 0, -1};

int main(){

  vi ans;
  while(true){
    cin >> w >> h;
    if(w == 0 && h == 0) break;
    vector<vector<char>> f(h, vector<char>(w));
    queue<P> ser;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++) {
	cin >> f[i][j];
	if(f[i][j] == '@')
	  ser.push(make_pair(i, j));
      }
    }
    int c = 0;
    while(!ser.empty()){
      P t = ser.front();
      ser.pop();
      int y = t.fi, x = t.se;
      // show(x); show(y);
      if(f[y][x] == '@') f[y][x] = '#';
      for(int i = 0; i < 4; i++) {
	int dx = x+xl[i], dy=y+yl[i];
	// cout << dx << ' ' << dy << endl;
	// show(dx); show(dy);
	if(dy < 0 || dy >= h || dx < 0 || dx >= w || f[dy][dx] == '#')
	  continue;
	
	if(f[dy][dx] == '.'){
	  c++;
	  ser.push(make_pair(dy, dx));
	  f[dy][dx] = '#';
	}
      }	
      // for(int i = 0; i < h; i++) {
      // 	for(int j = 0; j < w; j++) {
      // 	  cout << f[i][j] << ' ';
      // 	}
      // 	cout << endl;
      // }
      // cout << endl;
    }
    ans.pb(c+1);
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