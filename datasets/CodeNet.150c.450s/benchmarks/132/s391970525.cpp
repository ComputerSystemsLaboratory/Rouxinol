#include "bits/stdc++.h"
#define REP(i,a,b) for(i=a;i<b;++i)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ull unsigned ll
typedef long double ld;
#define SQR(X)  ( (X)*(X) )
#define CUBE(X) ( (X)*(X)*(X) )
#define ALL(a) (a).begin(),(a).end()
#define ifnot(a) if(not a)
#define dump(x)  cerr << #x << " = " << (x) << endl
using namespace std;
 
 
void reader(int &a){scanf("%d",&a);}
void reader(double &a){scanf("%lf",&a);}
void reader(char a[]){scanf("%s",a);}
void reader(ll &a){scanf("%lld",&a);}
void reader(ull &a){scanf("%llu",&a);}
// void reader(string& a){cin >> a;};
template<class T,class U> void reader(T& t,U& u){reader(t); reader(u);}
template<class T,class U,class V> void reader(T& t,U& u,V& v){reader(t); reader(u); reader(v);}
 
void writer(int a,char c) {printf("%d",a); putchar(c);}
void writer(ll a,char c) {printf("%lld",a); putchar(c);}
void writer(double a,char c) {printf("%.20lf",a); putchar(c);}
void writer(char a[]) {printf("%s",a);};
void writer(char a[],char c) {printf("%s",a);putchar(c);};
void writer(char a,char c) {putchar(a); putchar(c);};
template<class T>void writerLn(T t){writer(t,'\n');}
template<class T,class U>void writerLn(T t,U u){writer(t,' ');writer(u,'\n');}
template<class T,class U,class V> void writerLn(T t,U u,V v){writer(t,' ');writer(u,' ');writer(v,'\n');}
template<class T> void writerArr(T x[], int n){int i;if(!n){putchar('\n');return;}rep(i,n-1) writer(x[i],' ');writer(x[n-1],'\n');}
template<class T> void writerVec(vector<T> x){int n=x.size();int i;if(!n){putchar('\n');return;}rep(i,n-1) writer(x[i],' ');writer(x[n-1],'\n');}
 

 
// #define int ll
 
bool test = 1;

//............................
#define MAX 300000
signed main(){
  int i,j,k,l;
  while(1) {
	int n,p;
	cin >> n >> p;
	if(n == 0) break;
	vector<int> a1(n);
	int step = 0;
	int pabble_of_bowl = p;
	for(;;step++) {
	  if(pabble_of_bowl) {
		a1[step%n]++;
		pabble_of_bowl--;
		if(a1[step%n] == p) {
		  goto end;
		}
	  }
	  else {
		pabble_of_bowl += a1[step%n];
		a1[step%n] = 0;
	  }
	}
  end: 
	cout << step%n << endl;
  }
  return 0;
}