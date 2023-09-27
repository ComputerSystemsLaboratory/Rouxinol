#include <iostream>
using namespace std;

int main(){
  float x1, y1, x2, y2, x3, y3, xp, yp;
  float areasize;
  float areasize_sum, tmp;

  while(cin>>x1){
    cin>>y1;
    cin>>x2; cin>>y2;
    cin>>x3; cin>>y3;
    cin>>xp; cin>>yp;
    areasize=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
    if(areasize<0) areasize*=-1.0f;

    tmp=(x1-xp)*(y2-yp)-(y1-yp)*(x2-xp);
    if(tmp<0) tmp*=-1.0f;
    areasize_sum=tmp;
    tmp=(x2-xp)*(y3-yp)-(y2-yp)*(x3-xp);
    if(tmp<0) tmp*=-1.0f;
    areasize_sum+=tmp;
    tmp=(x3-xp)*(y1-yp)-(y3-yp)*(x1-xp);
    if(tmp<0) tmp*=-1.0f;
    areasize_sum+=tmp;

    if(areasize==areasize_sum) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}