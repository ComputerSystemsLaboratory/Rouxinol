#include<iostream>

using namespace std;

int main(){
  int n, m;
  int data[128];
  char x, y;
  char z;
  while(1){
    cin >> n;
      if (n == 0) break;
      else {
	for(int i = 0; i< 128; i++){
	  data[i] = i;
	}
	for(int i = 0; i< n; i++){
	  cin >> x >> y;
	  data[static_cast<int>(x)] = static_cast<int>(y);
	}
	
	cin >> m;
	for (int i= 0; i< m; i++){
	  cin >> z;
	  cout<< static_cast<char>(data[static_cast<int>(z)]);
	}
	cout <<"\n";
      }
  }
  return 0;
}