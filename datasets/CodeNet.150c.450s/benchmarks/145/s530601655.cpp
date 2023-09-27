#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main(){
  string n[1000];
  int i = 0;
  string m;

  map<string, int> M;

  while(cin >> n[i]){
    M[n[i]] += 1;
    i++;
  }


  int max = M[n[0]];
  m = n[0];

  for(int j = 1; j < i; j++){
    if(max < M[n[j]]){
      max = M[n[j]];
      m = n[j];
    }
  }
  cout << m;
  
  max = 0;
  
  for(int j = 0; j < i; j++){
    if(n[j].length() > max){
      max = n[j].length();
      m = n[j];
    }
  }
  
  cout << " " << m << endl;
  return 0;

}
    