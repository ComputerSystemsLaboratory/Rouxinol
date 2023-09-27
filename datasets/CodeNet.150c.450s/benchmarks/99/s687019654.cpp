#include<iostream>
#include<string>

using namespace std;

int ChangeFromStringToInt(string);
string ChangeFromIntToString(int);
void Atoi(int&, string&, int, char);

int main(){
  int i, n, a, b;
  string s, t, ans;

  cin >> n;

  for(i=0; i<n; ++i){
    cin >> s >> t;

    a = ChangeFromStringToInt(s);
    b = ChangeFromStringToInt(t);
    ans = ChangeFromIntToString(a+b);

    cout << ans << endl;
  }
  return 0;
}

int ChangeFromStringToInt(string s){
  int i, x, ans;

  for(i=0, x=1, ans=0; i<s.size(); ++i){
    if(s[i] >= '2' && s[i] <= '9'){
      x = s[i] - 48;
    }else{
      if(s[i] == 'm') ans += 1000*x;
      else if(s[i] == 'c') ans += 100*x;
      else if(s[i] == 'x') ans += 10*x;
      else if(s[i] == 'i') ans += x;
      x = 1;
    }
  }
  return ans;
}

string ChangeFromIntToString(int x){
  string s;
  Atoi(x, s, 1000, 'm');
  Atoi(x, s, 100, 'c');
  Atoi(x, s, 10, 'x');
  Atoi(x, s, 1, 'i');
  return s;
}

void Atoi(int& x, string& s, int l, char c){
  char _c;
  _c = x/l + 48;
  if(_c == '1'){
    s.push_back(c);
  }else if(_c >= '2' && _c <= '9'){
    s.push_back(_c);
    s.push_back(c);
  }
  x %= l;
}