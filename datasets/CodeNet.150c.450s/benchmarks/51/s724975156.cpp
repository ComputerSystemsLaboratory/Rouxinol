#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#define INF 2000000000
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
#define ll long long
#define PL pair<long long, long long>
#define P pair<int,int>
#define mk make_pair
#define en endl;
#define WHITE 0
#define BLACK 2
#define GRAY 1
#define RE return 0;
#define HERE cout<<"    "<<"HERE"<<en

int main(){
  set<int> s;
  for(int i=1; i<=30; i++){
    s.insert(i);
  }
  
  for(int i=1; i<=28; i++){
    int j;
    cin>>j;
    s.erase(j);
  }
  
  for(set<int>::iterator i=s.begin(); i!=s.end(); i++){
    cout<<*i<<en
  }
  
}
