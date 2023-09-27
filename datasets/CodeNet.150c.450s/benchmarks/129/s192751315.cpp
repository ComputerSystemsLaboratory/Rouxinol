#include <iostream>
using namespace std;

int main() {
    int r, c, i, j, z;
    cin >> r >> c;
    int poi[r + 1][c + 1];
    
    for(i = 0; i < r; i++){
    	for(j = 0; j < c; j++){
    		cin >> poi[i][j];
    	}
    }
    
    for(i = 0; i < r; i++){
    	z = 0;
  	   for(j = 0; j < c; j++){
    	  z += poi[i][j];
    	  
       }
       
       poi[i][c] = z;
    }
    
    for(i = 0; i < c + 1; i++){
       z = 0;	
       for(j = 0; j < r; j++){
    		z += poi[j][i];
    	}
    	poi[r][i] = z;
    }
    
    for(i = 0; i < r + 1; i++){
    	for(j = 0; j < c + 1; j++){
    		cout << poi[i][j];
    		if(j < c)
    		  cout << " ";
    		else
    		  cout << endl;
    	}
    }
    
}