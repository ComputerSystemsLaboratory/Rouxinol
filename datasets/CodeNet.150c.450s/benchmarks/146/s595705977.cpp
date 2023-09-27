#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-10

int main(){
  int n;cin>>n;
  for(int i=0;i<n;++i){
    double a,b,c,d,e,f,g,h;cin>>a>>b>>c>>d>>e>>f>>g>>h;
    double dx1,dy1,dx2,dy2;
    dx1 = a - c;
    dy1 = b - d;
    dx2 = e - g;
    dy2 = f - h;
    //cout << dx1 << " " << dy1 << " " << dx2 << " "<<dy2<<endl;
    double det = fabs(dx1*dy2 - dx2*dy1);
    (fabs(det)<EPS) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  }
  return EXIT_SUCCESS;
}