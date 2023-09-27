#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int convert_num,convert_strings;
  char hairetsu[100000][2];  
  while(cin >> convert_num && convert_num != 0){
    //    cout << convert_num << endl;
    for(int i=0;i<convert_num;i++){

    cin >> hairetsu[i][0] >> hairetsu[i][1];
    //    cout << hairetsu[i][0] << " " << hairetsu[i][1];
    //    cout << endl;
    }
    
    cin >> convert_strings;
    for(int j=0;j<convert_strings;j++){
      char t;
      cin >> t;
      for(int k=0;k<convert_num;k++){
	if(t == hairetsu[k][0]){ 
	  t = hairetsu[k][1];
	  break;
	}
      }
      cout << t;
    }
    cout << endl;
    
  }
  
  
}