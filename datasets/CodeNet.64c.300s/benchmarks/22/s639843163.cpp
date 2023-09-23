#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr first
#define sc second
typedef pair<int,int> pii;
typedef vector<int> vi;
const int INF = (1<<25);
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int main(){
  int n;
  int a,b,c;
  cin>> n;
  for(int i=0;i<n;i++){
    cin>> a>> b>> c;
    if(c*c == a*a+b*b || b*b == c*c+a*a || a*a == b*b+c*c){
      cout<< "YES"<< endl;
    }else{
      cout<< "NO"<< endl;
    }
  }
} 