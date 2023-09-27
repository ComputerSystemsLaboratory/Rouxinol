#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;

  int ball_num = 10;
  for(int i=0;i<n;i++){
    vector<int> a;
    bool flag = true;
    for(int j=0;j<ball_num;j++){ 
      int tmp;
      cin >> tmp;
      a.push_back(tmp);
    }

    int b=0;
    int c=0;
    for(int i=0;i<ball_num;i++){
      if(b<=c){
	swap(b, c);
      }
      
      // b > c

      if(b < a[i]){
	b = a[i];
      }else{
	if(c < a[i]){
	  c = a[i];
	}else{
	  flag = false;
	}
      }

      if(flag==false){
	break;
      }
    }

    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
    
  }

  

}