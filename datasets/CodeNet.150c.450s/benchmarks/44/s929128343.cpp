#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int hit(int str[],int str2[]){
  int i, j = 0;

  for(i = 0;i < 4;i++){
    if(str[i] == str2[i]){
      j++;
    }
  }

  return j;
}

int blow(int str3[],int str4[]){
  int i, j, k = 0;

  for(i = 0;i < 4;i++){
    for(j = 0;j < 4;j++){
      if(str3[i] == str4[j]){
	if(i == j){
	  ;
	}else{
	  k++;
	}
      }
    }      
  }
  return k;
}

int main(){
  int str[5], str2[5];

  while(scanf("%d", &str[0]) != EOF){ 
	scanf("%d %d %d", &str[1], &str[2], &str[3]);
    cin >> str2[0] >> str2[1] >> str2[2] >> str2[3];

  int hit_var = hit(str, str2);
  int blow_var = blow(str, str2);

  cout << hit_var << " " << blow_var << endl;

  }

  return 0;
}