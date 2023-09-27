#include <iostream>
#include <vector>
using namespace std;

int main(void){
  while(true){
    int n, p;
    cin >> n >> p;
    if(n == 0)
      break;

    vector<int> stone(n, 0);
    int man = 0, wan = p;
    
    while(true){
      if(wan != 0){
	wan--;
	stone[man]++;

	if(wan == 0){
	  bool flag = true;
	  for(int i=0; i<n; i++){
	    if(i != man && stone[i] != 0)
	      flag = false;
	  }
	  if(flag == true)
	    break;
	}
      }else{
	wan = stone[man];
	stone[man] = 0;
      }

      man = (man+1)%n;
    }

    cout << man << endl;
  }
  
  return 0;
}