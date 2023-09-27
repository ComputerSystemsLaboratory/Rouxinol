#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a,b,c,N;
  cin >> N;
  //vector<int> v;
  //while (cin >> a >> b >> c){
  //v.push_back(a,b,c);
  //  }
  //int x = a + b;
  //int y = b + c;
  //int z = c + a;
  //if (x => c || y => a || z => b){
  //cout << "NO" << endl;
  //} else if(x < c || y < a || z < b){
  //cout << "YES" << endl;
  //}
  while(N>0){
    cin >> a;
    cin >> b;
    cin >> c;
    //int x = a + b;
    //int y = b + c;
    //int z = c + a;
    if (//x <= c || y <= a || z <= b
   a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b ){
      cout << "YES" << endl; 
      N = N - 1;  
    }else if(//x > c || y > a || z > b
 a * a + b * b != c * c || b * b + c * c != a * a || c * c + a * a != b * b){
      cout << "NO" << endl;
      N = N - 1;
    }
  }
  return 0;
}

