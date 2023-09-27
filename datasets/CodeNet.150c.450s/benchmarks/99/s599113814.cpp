#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int convert(string s){
  int n,sum=0;
  n=1;
  REP(i,s.size()){
    if(s[i] == 'm')sum += n*1000;
    else if(s[i] == 'c')sum += n*100;
    else if(s[i] == 'x')sum += n*10;
    else if(s[i] == 'i')sum += n;
    if('9'-s[i]>=0 && '9'-s[i]<8){n=s[i]-'0';}
    else n=1;
  }
  return sum;
}

int main(){
  int n;
  string s1,s2;
  cin >> n;
  REP(k,n){
    cin >> s1 >> s2;
    int sum = convert(s1) + convert(s2);
    int m = sum / 1000, c = (sum%1000)/100, x = sum%100/10, i = sum%10;
    if(m>1)cout << m << "m";
    else if(m==1) cout << "m";
    if(c>1)cout << c << "c";
    else if(c==1) cout << "c";
    if(x>1)cout << x << "x";
    else if(x==1) cout << "x";
    if(i>1)cout << i << "i";
    else if(i==1) cout << "i";
    cout << '\n';
  }
  return 0;
}