#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int len;
  int count;
  int i,j;
  int num;
  int flg;
  char moji[10][6]={
    {' ',' ',' ',' ',' '},
    {'.',',','!','?',' '},
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'},
    {'j','k','l'},
    {'m','n','o'},
    {'p','q','r','s'},
    {'t','u','v'},
    {'w','x','y','z'}
  };

  cin >> n;

  for(i = 0 ; i < n ; i++){
    num = 0;
    count = -1;
    string str;

    cin >> str;

    for(j = 0 ; j < str.size() ; j++){
      flg = 1;
      if(str[j]=='1'){
	num = 1; 
      }else if(str[j]=='2'){
	num = 2; 
      }else if(str[j]=='3'){
	num = 3; 
      }else if(str[j]=='4'){
	num = 4;
      } else if(str[j]=='5'){
	num = 5; 
      }else if(str[j]=='6'){
	num = 6; 
      } else if(str[j]=='7'){
	num = 7;
      }else if(str[j]=='8'){
	num = 8; 
      }else if(str[j]=='9'){
	num = 9; 
      }else{
	if(num == 0){
	  continue;
	}

	if(num == 1){
	  count = count % 5;
	}else if(num == 7 || num == 9){
	  count = count % 4;
	}else{
	  count = count % 3;
	}

	cout << moji[num][count];

	flg = 0;
	count = -1;
	num = 0;
      }
      if(flg == 1) count++;
    }
    cout << endl;
  }
  return 0;
}
      