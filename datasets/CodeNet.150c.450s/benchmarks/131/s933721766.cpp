#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <functional>
#include <set>
#include <typeinfo>
using namespace std;

int main(){
  while(true){
    //    vector<int> a;
    int n;
    string tmpa;
    set<int> nums;
    int cnt = 1;
    vector<int> keep(21,10000000);
    cin >> tmpa >> n;
    if(n == 0 && tmpa == "0")break;
    nums.insert(atoi(tmpa.c_str()));
    keep[0] = atoi(tmpa.c_str());
    while(true){
      //      cout << "aa" << endl;
      vector<int> a(n,0);
      vector<int> b(n,0);
      for(int i = 0;i < tmpa.size();i++){
	a[i] = tmpa[i] - '0';
	b[i] = tmpa[i] - '0';
      }
      sort(a.begin(),a.end(),greater<int>());
      sort(b.begin(),b.end());
      int c = 1;
      int an,bn;
      an = 0;bn = 0;
      for(int i = 0;i < n;i++){
	an = an+a[i]*c;
	bn = bn+b[i]*c;
	c = c*10;
      }
      //      cout << an << " " << bn <<  endl;
      //return 0;
      int ans = bn - an;
      
      if( nums.find(ans) == nums.end() ){
	  nums.insert(ans);
	  keep[cnt] = ans;
	  /*c = 10;
	  for(int i = 0;i < n;i++){
	    tmpa[i] = IntToString(ans%c);
	    c = c*10;
	    }*/
	  stringstream ss;
	  ss << ans;
	  tmpa = string(ss.str());/*
	  for(int i  = 0;i < n;i++){
	    cout << tmpa[i];
	  }
	  cout << " "<< ans<< endl;
				  */
	  cnt++;
      }else{
	for(int i = 0;i < 21;i++){

	  if(ans==keep[i]){
	    cout << i << " " << ans << " " << cnt - i << endl;
	    break;
	  }
	}
	break;
	
      }

    }

    
  }
  return 0;
}