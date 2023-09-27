#include<iostream>
#include<cctype>
#include<string>
using namespace std;

const string mcxi = "ixcm";
const int ten[] = {0,1,10,100,1000,10000};

int mtoi(string s){
  int res = 0;
  for(int i=0;i<(int)s.size();i++){
    if(isdigit(s[i])){
      int pos=0;
      while(s[i+1] != mcxi[pos])pos++;
      res += (int)(s[i]-'0') * ten[pos+1];
      i++;
    }else{
      int pos=0;
      while(s[i] != mcxi[pos])pos++;
      res += ten[pos+1];
    }
  }
  return res;
}

string itom(int x){
  string res="";
  for(int i=3;i>=0;i--){
    int digit = x%ten[i+2]/ten[i+1];
    if(digit==1){
      res += mcxi[i];
    }else if(digit!=0){
      res += '0'+digit;
      res += mcxi[i];
    }
  }
  return res;
}

int main(){
  int n;
  cin >> n;
  while(n--){
    string a,b;
    cin >> a >> b;
    cout << itom( mtoi(a) + mtoi(b) ) << endl;
  }
}