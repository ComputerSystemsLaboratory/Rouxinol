#include <iostream>
using namespace std;

int main(){
  int N;

  while(cin>>N&&N!=0){
    int n[200],d[200];
    int x[200],y[200];
    int w=1,h=1;
    int minx=0,miny=0,maxx=0,maxy=0;

    x[0]=0;y[0]=0;
    for(int i=1;i<N;i++){
      cin>>n[i]>>d[i];
      if(d[i]==0){
        x[i]=x[n[i]]-1;
        y[i]=y[n[i]];
        if(minx>x[i]) minx=x[i];
      }else if(d[i]==2){
        x[i]=x[n[i]]+1;
        y[i]=y[n[i]];
        if(maxx<x[i]) maxx=x[i];
      }else if(d[i]==1){
        x[i]=x[n[i]];
        y[i]=y[n[i]]-1;
        if(miny>y[i]) miny=y[i];
      }else if(d[i]==3){
        x[i]=x[n[i]];
        y[i]=y[n[i]]+1;
        if(maxy<y[i]) maxy=y[i];
      }
    }
    w = w + maxx - minx;
    h = h + maxy - miny;
    cout << w << " " << h << endl;
  }
  return 0;
}