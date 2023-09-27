#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> c;
vector <int> a,b;

int main() {


  c.push_back(0);
  for(int i=1;c[i-1]<=1000010;i++) c.push_back(i*(i+1)*(i+2)/6);
   
  for(int i=0;i<=1000001;i++) {
    a.push_back(i);
    b.push_back(i);
  }
  
  for(int i=0;i<c.size();i++) {
    for(int j=1;j<=1000000;j++) {
      
      if(j-c[i] >=0) { 
     
	if(a[j-c[i]] >= 0) a[j] = min(a[j], a[j-c[i]]+1);

	if(c[i] % 2 == 1 && b[j-c[i]] >=0){
	  b[j] = min(b[j],b[j-c[i]]+1);
	}
      }
      
    }
  }

 while(1) {
    int m;
  cin >> m;
  if(m == 0) break;
  
  cout << a[m] <<" " << b[m] << endl;
  
  }
  return 0;
}