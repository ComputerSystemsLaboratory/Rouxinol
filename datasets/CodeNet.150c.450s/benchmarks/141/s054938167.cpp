#include<iostream>
#include<cmath>
using namespace std;
double S(double ax,double ay,double bx,double by,double cx,double cy){
    double ab,bc,ca;
    ab=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    bc=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
    ca=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
    double s=(ab+bc+ca)/2;
    double S=sqrt(s*(s-ab)*(s-bc)*(s-ca));
    return S;
}
int main(){
    double ax,ay,bx,by,cx,cy,px,py;
    while(cin>>ax>>ay>>bx>>by>>cx>>cy>>px>>py){
        double ABC,ABP,BCP,CAP;
        ABC=S(ax,ay,bx,by,cx,cy);
        ABP=S(ax,ay,bx,by,px,py);
        BCP=S(bx,by,cx,cy,px,py);
        CAP=S(cx,cy,ax,ay,px,py);
        double dif=ABC-ABP-BCP-CAP;
        if(dif<=0.001&&dif>=-0.001)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}