#include <iostream>
#include <stdlib.h>
using namespace std;

int card[4][13]={};

int main(){

#if 0
  for(int i=0; i<4; i++){
	  for(int j=0; j<13; j++){
      cout << card[i][j] << endl;
    }
  }
#endif
  
  int n;
  cin >> n;

  char kind;
  int b;

  for(int i=0; i<n; i++){
    cin >> kind >> b;

    switch(kind){
    case 'S':
      card[0][b-1]=1;
      break;
    case 'H':
      card[1][b-1]=1;
      break;
    case 'C':
      card[2][b-1]=1;
      break;
    case 'D':
      card[3][b-1]=1;
      break;
    default:
      cout << "ERROR: Please Input S/H/C/D." << endl;
      exit(1);
    }
  }

  for(int i=0; i<4; i++){
	  for(int j=0; j<13; j++){
      if(card[i][j]==0){
        switch(i){
        case 0:
          cout << "S " << j+1 << endl;
    		  break;
	  	  case 1:
          cout << "H " << j+1 << endl;
    	  	break;
	    	case 2:
          cout << "C " << j+1 << endl;
 	    	 	break;
  	  	case 3:
        default:
          cout << "D " << j+1 << endl;
   	  	 	break;
        }
      }
    }
  }

  
}