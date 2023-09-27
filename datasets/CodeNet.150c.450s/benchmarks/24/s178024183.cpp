#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct P{int p,d;};

bool cmp_x(const P& a, const P& b){
  return a.p>b.p;
}

int main(void){
  int n,m,d,p;
  vector<P>ar;
  P in;

  while(cin >> n >> m,n|m){
    ar.clear();
    for(int i=0;i<n;i++){
      cin >> in.d >> in.p;
      ar.push_back(in);
    }
    int sum=0;
    for(int i=0;i<n;i++)
      sum+=ar[i].d*ar[i].p;

    sort(ar.begin(),ar.end(),cmp_x);

    for(int i=0;i<ar.size();i++){
      if(ar[i].d>=m){
	sum-=ar[i].p*m;
	break;
      }
      else {
	sum-=ar[i].d*ar[i].p;
	m-=ar[i].d;
      }
    }

    cout << sum << endl;
  }
  
  return 0;
}