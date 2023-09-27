#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
int main() {
double x1, y1, x2, y2, x3, y3, xp ,yp,ss,s1,s2,s3;
while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
ss=fabs((x3-x1)*(y2-y1)-(x2-x1)*(y3-y1));
s1=fabs((x3-xp)*(y2-yp)-(x2-xp)*(y3-yp));
s2=fabs((x3-xp)*(y1-yp)-(x1-xp)*(y3-yp));
s3=fabs((x2-xp)*(y1-yp)-(x1-xp)*(y2-yp));
 
if(fabs(s1+s2+s3-ss)<0.001){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}}
    return 0;
}