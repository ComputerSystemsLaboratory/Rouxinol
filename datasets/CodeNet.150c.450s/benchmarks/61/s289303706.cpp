#include<iostream>
#include<vector>

using namespace std;

int main() {
  int n, a, b, c, x;
  while(cin>>n>>a>>b>>c>>x && (n||a||b||c||x)) {
    vector<int> y;
    int flames = -1;
    for(int i=0; i<n; i++) {
      int tmp;
      cin>>tmp;
      y.push_back(tmp);
    }
    for(int i=0; i<n && flames<10001; i++) {
      bool flag = false;
      while(flag == false && flames<10001) {
	if(x == y[i]) {
	  flag = true;
	}
        x = (a*x+b)%c;
	flames++;
      }
    }
    //cout<<n<<endl;
    if(flames > 10000) {
    cout<<"-1"<<endl;
    }
    else {
      cout<<flames<<endl;
    }
  }
}