#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  char work;
  int h,n;

  while(true){
    cin >> str;

    if(str == "-") break;

    
    cin >> n;

    for(int l = 0; l<n ; ++l){
      cin >> h;
      
      for(int i=0 ; i<h ; ++i){
	work = str[0];
	for(int k = 0; k<(int)str.size() - 1 ; ++k){
	  str[k] = str[k + 1];
	}
	str[(int)str.size() - 1] = work;
      }
      
    }
    
    cout << str << endl;
  }

  return 0;
}

