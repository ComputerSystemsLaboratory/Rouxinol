#include<iostream>
#include<cmath>
#define N 0.000001
using namespace std;

int main(){
  double x1,y1,x2,y2,x3,y3,px,py;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>px>>py){
    double s1=0,s2=0,s3=0,s=0,a=0,b=0,c=0,a1=0,b1=0,c1=0,a2=0,b2=0,c2=0,a3=0,b3=0,c3=0;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    s=(a+b+c)/2;
    s=sqrt(s*(s-a)*(s-b)*(s-c));

    a1=sqrt((px-x2)*(px-x2)+(py-y2)*(py-y2));
    b1=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c1=sqrt((x3-px)*(x3-px)+(y3-py)*(y3-py));
    s1=(a1+b1+c1)/2;
    s1=sqrt(s1*(s1-a1)*(s1-b1)*(s1-c1));

    a2=sqrt((x1-px)*(x1-px)+(y1-py)*(y1-py));
    b2=sqrt((px-x3)*(px-x3)+(py-y3)*(py-y3));
    c2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    s2=(a2+b2+c2)/2;
    s2=sqrt(s2*(s2-a2)*(s2-b2)*(s2-c2));

    a3=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b3=sqrt((x2-px)*(x2-px)+(y2-py)*(y2-py));
    c3=sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));
    s3=(a3+b3+c3)/2;
    s3=sqrt(s3*(s3-a3)*(s3-b3)*(s3-c3));

    if((-N<s1 && s1<N) || (-N<s2 && s2<N) || (-N<s3 && s3<N) )cout<<"NO"<<endl;
    else if((s1+s2+s3)>s-N && (s1+s2+s3)<s+N )cout<<"YES"<<endl;
    else  cout<<"NO"<<endl; 
  }
  return 0;
}