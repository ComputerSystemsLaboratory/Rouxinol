#include <iostream>
#include <algorithm>

using namespace std;
int main(){
  const int MAX_num = 9;
  const int min_num = 0;
  int n = 0;
  for(int i=1;cin.eof()==false;i++){
    int count =0;
    n = -1;
    cin >> n;
    if(n==-1) break;
    for(int a = min_num; a < MAX_num+1; a++){
      for(int b = min_num; b < MAX_num+1; b++){
	for(int c = min_num; c < MAX_num+1; c++){
	  for(int d = min_num; d < MAX_num+1; d++){
	    if(a+b+c+d==n){
	      count++;
	    }
	  }
	}
      } 
    }
    cout << count<<endl;
  }
}