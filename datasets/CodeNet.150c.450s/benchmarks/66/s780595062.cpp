#include <bits/stdc++.h>
using namespace std;

int main(){
  int num_1,num_2;
  int i,j;
  int OK=0;
  string ID[257];
  string ID_2;
  int flg=0; //flg = 0→施錠 flg = 1→開錠 
  cin >> num_1;
  for(i = 0 ; i < num_1 ; i++){
    cin >> ID[i];
  }

  cin >> num_2;

  for(i = 0 ; i < num_2 ; i++){
    int flg_2 = 0;
    cin >> ID_2;
    for(j = 0 ; j < num_1 ; j++){
      if(ID_2==ID[j]&&flg==0){
	flg = 1;
	flg_2 = 1;
	cout << "Opened by" << " " << ID_2 << endl;
      }else if(ID_2==ID[j]&&flg==1){
	flg = 0;
	flg_2 =1;
	cout << "Closed by" << " " << ID_2 << endl;
      }else{
	continue;
      }
    }
    if(flg_2 == 0){
      cout << "Unknown" << " " << ID_2 << endl;
    }
  }
  return 0;
}