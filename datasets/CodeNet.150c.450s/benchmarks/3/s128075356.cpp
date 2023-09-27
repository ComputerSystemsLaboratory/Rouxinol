#include<bits/stdc++.h>
using namespace std;

int main(){
  string str,com,rep;
  char work;
  int n,a,b;

  cin >> str;
  cin >> n;

  for(int i=0; i<n; ++i){
    cin >> com >> a >> b;
    
    if(com == "replace"){
      cin >> rep;
      for(int k=a; k<=b; ++k){
	str[k] = rep[k - a];
      }
    }else if(com == "reverse"){
      string str2 = str;
      int l = b - a + 1;
      int counter = 0;
      for(int k = a; k<=b; ++k){
	str[k] = str2[b-counter];

	++counter;
      }
    }else{
      for(int k = a; k<=b; ++k){
        cout << str[k];
      }
      cout << endl;
    }
  }

  return 0;
}

