#include <iostream>

using namespace std;


int main(void){
  
  int num;
  int house[4][3][10] = {0};
  
  cin >> num;

  for(int i=0; i<num; i++){
      int build,floor,number,person;
      cin >> build >> floor >> number >> person;

      house[build - 1][floor - 1][number - 1] += person;
  }

  for(int i=0; i<4; i++){
     for(int j=0; j<3; j++){
        for(int k=0; k<10; k++){
            cout << " " << house[i][j][k];
        }
        cout << endl;
     }
     if(i != 3){
     for(int j=0; j<20; j++)
        cout << "#";
     cout << endl;
    }
  }

  
  

  return 0;
}