#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.00001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

double area(double ax, double ay, double bx, double by, double cx, double cy)
{
  double sum;
  double len1,len2,len3;

  len1=sqrt( (ax-bx)*(ax-bx) + (ay-by)*(ay-by) );
  len2=sqrt( (ax-cx)*(ax-cx) + (ay-cy)*(ay-cy) );
  len3=sqrt( (bx-cx)*(bx-cx) + (by-cy)*(by-cy) );

  double s=(len1+len2+len3)/2;

  sum=sqrt(s*(s-len1)*(s-len2)*(s-len3));

  return sum;
}


int main()
{
  double x1,x2,x3,y1,y2,y3,px,py;
  double s1,s2,s3,s4;

  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
	      &x1,&y1,&x2,&y2,&x3,&y3,&px,&py)!=EOF){

    s1=area(x1,y1,x2,y2,px,py);
    s2=area(x1,y1,x3,y3,px,py);
    s3=area(x2,y2,x3,y3,px,py);
    s4=area(x1,y1,x2,y2,x3,y3);

    if(s1+s2+s3-s4<EPS)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  }
}