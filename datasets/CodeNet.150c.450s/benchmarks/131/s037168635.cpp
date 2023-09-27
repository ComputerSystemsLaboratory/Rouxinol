#include <bits/stdc++.h>
using namespace std;


int A, L;

string to_str(int n) {
  ostringstream os;
  os << n;
  return os.str();
}

int calc(int a) {
  string s = to_str(a);
  
  sort(s.begin(), s.end(), greater<char>());
  
  while(s.size() < L) s += '0';
  
  int ret = atoi(s.c_str());
  reverse(s.begin(), s.end());
  
  ret -= atoi(s.c_str());
  
  return ret;
}

int main()
{
  int flag[1000005];
  
  while(cin >> A >> L, A || L) {
    
    int j = 1;
    fill_n(flag, 1000005, -1);
    flag[A] = 0; A = calc(A);
    
    while(!~flag[A]) {
      flag[A] = j; A = calc(A); 
      j++;
    }
    
    cout << flag[A] << " " << A << " " << j - flag[A] << endl;

  }

  return 0;
}