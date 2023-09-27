#include<bits/stdc++.h>
using namespace std;


int main(){
  string s;
  int n,ans = 0;
  
  while(true){
    bool on_flag = false;
    bool kataasi = true;
    string s;
    int n,ans = 0;
    
    cin >> n;

    if(n == 0) break;
    
    for(int i=0;i<n;++i){
      cin >> s;

      kataasi = !kataasi;
      
      if(kataasi){
	if(on_flag){
	  if(s == "ld" || s == "rd"){
	    on_flag = false;
	    ++ans;
	  }else{
	    
	  }
	}else{
	  if(s == "lu" || s == "ru"){
	    ++ans;
	    on_flag = true;
	  }else{

	  }
	}
      }
    }

    cout << ans << endl;
  }
  
  return 0;
}

