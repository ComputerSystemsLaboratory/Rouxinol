#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;

const int MNUM = 12, leapMNUM = 12;
const int ML[] = {31,28,31,30,31,30,31,31,30,31,30,31};      //day/month in usual year
const int leapML[] = {31,29,31,30,31,30,31,31,30,31,30,31};  //day/month in leap year
const string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

struct date{
  int y,m,d;

  date(void):y(0),m(1),d(1){}
  date(int a,int b,int c):y(a),m(b),d(c){}
  
  bool isLeap(void){
    if(y%400==0)return true;
    if(y%100==0)return false;
    if(y%4==0)return true;
    return false;
  }

  date next(void){
    d++;
    if(isLeap()){
      if(leapML[m-1]<d){ d=1; m++; }
      if(leapMNUM<m){ m=1; y++; }
    }else{
      if(ML[m-1]<d){ d=1; m++; }
      if(MNUM<m){ m=1; y++; }
    }
    return *this;
  }

  bool operator==(const date x)const{return (y==x.y && m==x.m && d==x.d);}

  bool operator<(const date x)const{
    if(y!=x.y)return y<x.y;
    if(m!=x.m)return m<x.m;
    return d<x.d;
  }

  bool operator<=(const date x)const{return (*this==x || *this<x); }
  bool operator>(const date x)const{return !(*this<=x);}
  bool operator>=(const date x)const{return !(*this<x);}

  ll dayCount(void)const{
    date tmp;
    for(ll res=0;;res++){
      if(tmp==*this)return res;
      tmp.next();
    }
    return 0;
  }

  ll operator-(const date x)const{
    return dayCount() - x.dayCount();
  }

  //calculate days from Julian Day(-4713/01/01) using Fliegel's formula.
  ll Fliegel(void){
    int a = (14-m)/12, Y = y+4800-a, M = m+12*a-3;
    return (ll)d + (153*M+2)/5 + 365*Y + Y/4 - Y/100 + Y/400 - 32045;
  }

  //calculate day of week using Zeller congruence.
  int Zeller(void){
    int Y = y, M = m;
    if(M<3){ Y--; M+=12; }
    return (Y + Y/4 - Y/100 + Y/400 + (13*M+8)/5 + d)%7;
  }
};

int main(){
  int m,d;
  while(cin >> m >> d,m||d)
    cout << days[date(2004,m,d).Zeller()] << endl;
}