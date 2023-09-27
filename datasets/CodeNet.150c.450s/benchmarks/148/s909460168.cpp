#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>
#include <fstream>
#include <map>
using namespace std;
typedef long long ll;
#define INF 1000000000000 //10^12:極めて大きい値,∞
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)


int main(){
  int n,A=0,W=0,T=0,R=0;
  string s;
  cin >> n;
  REP(i,n){
    cin >> s;
    if(s=="AC") A++;
    if(s=="WA") W++;
    if(s=="TLE") T++;
    if(s=="RE") R++;
  }
  cout << "AC" << " x " << A << endl;
  cout << "WA" << " x " << W << endl;
  cout << "TLE" << " x " << T << endl;
  cout << "RE" << " x " << R << endl;
  return 0;
}