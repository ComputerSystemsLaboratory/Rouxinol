#include<iostream>
using namespace std;
int main(){
  int n,card[4][13],x;
  char c;
  
  cin >> n;

  for(int i = 0;i < 4;i++){
    for(int j = 0 ;j < 13;j++){
      
      card[i][j] = 0;
    }
  }
  
  
  for(int i = 0;i < n;i++){
   
    cin >> c >> x;

    if(c == 'S') {card[0][x-1] = x;}
    else if (c == 'H') {card[1][x-1] = x;}
    else if (c == 'C') {card[2][x-1] = x;}
    else {card[3][x-1] = x;}


  }

  for(int i = 0;i < 4;i++){
    for(int j = 0 ;j < 13;j++){
      
      if(card[i][j] == false && i == 0) {
	cout << "S" << " " <<  j+1 << endl;
	  }
       if(card[i][j] == false && i == 1) {
	 cout << "H" << " " <<  j+1 << endl;
	  }
        if(card[i][j] == false && i == 2) {
	  cout << "C" << " " << j+1 << endl;
	  }
	 if(card[i][j] == false && i == 3) {
	   cout << "D" << " " << j+1 << endl;
	  }
    }
  }
  
  return 0;
}