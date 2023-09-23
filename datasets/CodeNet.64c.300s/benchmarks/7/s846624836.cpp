#include <iostream>
#define N 14
using namespace std;
int main(){
  int n,num,s[N],h[N],c[N],d[N],i;
  char in;
  for(i=0;i<N;i++) s[i]=h[i]=c[i]=d[i]=0;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> in;
    cin >> num;
    if(in=='S') s[num]=1;
    else if(in=='H') h[num]=1;
    else if(in=='C') c[num]=1;
    else d[num]=1;
  }
  for(i=1;i<N;i++){
    if(s[i]==0) cout << 'S' << ' ' << i << endl;
  }
  for(i=1;i<N;i++){
    if(h[i]==0) cout << 'H' << ' ' << i << endl;
  }
  for(i=1;i<N;i++){
    if(c[i]==0) cout << 'C' << ' ' << i << endl;
  }
  for(i=1;i<N;i++){
    if(d[i]==0) cout << 'D' << ' ' << i << endl;
  }
  return 0;
}