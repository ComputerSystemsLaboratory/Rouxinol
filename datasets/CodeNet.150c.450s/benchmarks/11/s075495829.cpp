#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int count = 0;
  int missing;
  missing = 54 - n;
  int card[13][4];//[][0] =S;[][1] =H;[][2] =C;[][4] = D;
  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 13;j++){
      card[j][i] = 0;//found:1, NOT found:0
    }
  }
  for(int k = 0;k < n;k++){
    char s1;
    int s2;
    cin.ignore();
    cin >> s1 >> s2;
    if(s1 == 'S'){
      card[s2-1][0] = 1;
    }else if(s1 == 'H'){
      card[s2-1][1] = 1;
    }else if(s1 == 'C'){
      card[s2-1][2] = 1;
    }else if(s1 == 'D'){
      card[s2-1][3] = 1;
    }
  }
  for(int i2 = 0;i2 < 4; i2++){
    for(int j2 = 0; j2 < 13; j2++){
      if(card[j2][i2] == 0){
	if(i2 == 0){
	  cout << "S " << j2+1 << endl;
	}else if(i2 == 1){
	  cout << "H " << j2+1 << endl;
	}else if(i2 == 2){
	  cout << "C " << j2+1 << endl;
	}else if(i2 == 3){
	  cout << "D " << j2+1 << endl;
	}
      }
    }
  }
}

