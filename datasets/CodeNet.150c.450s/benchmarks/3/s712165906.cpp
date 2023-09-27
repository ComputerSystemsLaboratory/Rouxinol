#include <iostream>
using namespace std;

void pri(string s,int a,int b){
  cout << s.substr(a,b-a+1) << endl;
}

string rep(string s,int a, int b, string r){
  for(int i=a; i<=b; i++){
    s[i] = r[i-a];
  }
  return s;
}

string rev(string s, int a, int b){
  string tmp = s;
  for(int i=a; i<=b; i++){
    s[i] = tmp[b+a-i];
  }
  return s;
}

int main(){

  int n;
  string s;
  cin >> s >> n;
  for(int i=0; i<n; i++){
    string ope,tar; cin >> ope;
    int a,b;
    //    cout << ope <<endl;
    if(ope == "replace"){
      cin >> a >> b >> tar;
      s = rep(s,a,b,tar);
    }
    if(ope == "print"){
      cin >> a >> b;
      pri(s,a,b);
    }
    if(ope == "reverse"){
      cin >> a >> b;
      s = rev(s,a,b);
    }
  }
}