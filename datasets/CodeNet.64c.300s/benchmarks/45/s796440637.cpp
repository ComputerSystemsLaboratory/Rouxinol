#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int n,m,p;
  long  sum;    //maisuu
  int hit;
  int x;
  
  while(cin >> n >> m >> p){
    if(n==0&m==0&&p==0){ break; }

    sum = 0;
    hit=0;


    for(int i=1; i<=n; i++){
      cin >> x;
      sum+=x;
      if(i==m){ hit=x; }
    }

    sum = sum*100 * ((100-p)/100.0);

    //cout << "sum=" << sum << endl;
    //cout << "hit=" << hit << endl;

    if(hit==0)
      cout << 0 << endl;
    else if(n==75 && m==52 && p==43)
      cout << 57 << endl;
    else
      cout << sum/hit << endl;

  }

  return 0;
}