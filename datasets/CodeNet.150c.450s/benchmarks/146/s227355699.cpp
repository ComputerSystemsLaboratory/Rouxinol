#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double x1,x2,x3,x4,y1,y2,y3,y4;
  double abx,aby,cdx,cdy,abr,cdr;
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    abx=x1-x2;
    aby=y1-y2;
    cdx=x3-x4;
    cdy=y3-y4;
    
    abr=sqrt(abx*abx+aby*aby);
    cdr=sqrt(cdx*cdx+cdy*cdy);

    abx=abx/abr;
    aby=aby/abr;
    cdx=cdx/cdr;
    cdy=cdy/cdr;

    if(abx==cdx&&aby==cdy)
      cout<<"YES\n";
    else if(abx==-1*cdx&&aby==-1*cdy)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  return 0;
}