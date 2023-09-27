#include<iostream>
using namespace std;

int main()
{

    int n,x;

    int i,j,k;

    int count;
 while(1){
   count = 0;
    cin >> n >> x;
    if(n == 0 && x == 0){ break;
    }
    
    else {
    
    for(i = 1;i <= n;i++){

      for(j = i+1;j <= n;j++){

	for(k = j+1;k <= n;k++){

	  if(i + j + k == x){

	    count++;
	  }
	}
      }
    }

    }
    cout << count << "\n";
  }
}