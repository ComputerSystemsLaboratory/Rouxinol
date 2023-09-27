#include<iostream>

using namespace std;

int main() {
  int n, y, m, d;
  int totalDays = 999*(5*19+5*20) + 333*5;
  //cout<<totalDays<<endl<<endl;
  cin>>n;
  for(int i=0; i<n; i++) {
    int ans = totalDays;
    cin>>y>>m>>d;
    //cout<<y<<" "<<m<<" "<<d<<endl;
    for(int a=1; a<=y; a++) {
      if(a != y) {
        for(int b=1; b<=10; b++) {
	  if(a%3==0 || b%2==1) {
	    ans -= 20;
	  }
	  else {
	    ans -= 19;
	  }
	}
      }
      else {
	for(int b=1; b<m; b++) {
	  if(a%3==0 || b%2==1) {
	    ans -= 20;
	  }
	  else {
	    ans -= 19;
	  }
	}
	ans -= d-1;
      }
    }
    
    cout<<ans<<endl;
  }
}