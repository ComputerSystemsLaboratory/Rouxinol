#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#define REP(i,n) for(long long int (i)=0;(i)<(n);i++)


using namespace std;


int main(){
    string str;
    int n,h;
    while(cin >> str){
      if(str=="-")break;
      cin >> n;
      REP(i,n){
        cin >> h;
        string cat = str.substr(0,h);
        str.erase(0,h);
        str+=cat;
      }
      cout << str << endl;
    }
    return 0;
}

