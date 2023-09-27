#include <iostream>
#include <vector>

using namespace std;

int main(){
  int m,n1,n2,p,res;
  while(cin >> m >> n1 >> n2, m|n1|n2){
    vector<int> a;
    for(int i=0;i<m;i++){
      cin >> p;
      a.push_back(p);
    }
    res = n1;
    for(int i=n1,g=0;i<=(m==n2?n2-1:n2);i++){
      // cout << i << " " << a[i-1]-a[i] << endl;
      if(g<=a[i-1]-a[i]){
	res=i;
	g=a[i-1]-a[i];
      }
    }
    cout << res << endl;
  }
}