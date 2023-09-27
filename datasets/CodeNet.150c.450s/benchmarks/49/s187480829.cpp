#include<iostream>
#include<list>

using namespace std;

void solve(int n){
  list <int> s;
  for(int i = 0 ; i < n ; i++ ){
    int a;
    cin >> a;
    s.push_back(a);
  }
  
  int s_max = 0;
  int s_min = 0xFFFF;
  list<int>::iterator s_max_it;
  list<int>::iterator s_min_it;

  for(list<int>::iterator it = s.begin() ; it != s.end() ; it++ ){
    if(*it > s_max){
      s_max = *it;
      s_max_it = it;
    }
    if(*it < s_min){
      s_min = *it;
      s_min_it = it;
    }
  }
  
  s.erase(s_max_it);
  s.erase(s_min_it);

  int sum = 0;
  for(list<int>::iterator it = s.begin() ; it != s.end() ; it++ ){
    sum += *it;
  } 
  cout << sum / (n-2) << endl;
  return;
}

int main(){
  
  while(1){
  
  int n;
  cin >> n;
  
  if(n > 0)
    solve(n);
  else
    break;

  }

  return 0;
}