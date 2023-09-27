#include <iostream>
#include <string>

using namespace std;


int main(){

  string str;
  string str2;
  int n,s,s2;
  int cou[1024][1024] = {{}};
  int max = 0;

  cin >> n;

  for(int i = 0;i < n;i++){

    cin >> str >> str2;

    str = ' ' + str;
    str2 = ' ' + str2;


    s = str.size();
    s2 = str2.size();

    for(int j = 1;j < s;j++){
      for(int k = 1;k < s2;k++){
	if(str[j] == str2[k]){
	  cou[j][k] = cou[j - 1][k - 1] + 1;
	  if(cou[j][k] > max) max = cou[j][k];
	  // cout << "a: str = " << str[j] << " str2 = " << str2[k] << " cou = " << cou[j][k] << endl;
	}
	else if(cou[j - 1][k] > cou[j][k - 1]){
	  cou[j][k] =  cou[j - 1][k];
	  // cout << "str = " << str[j] << " str2 = " << str2[k] << " cou = " << cou[j][k] << endl;
	}
	else {
	  cou[j][k] = cou[j][k - 1];
	  // cout << "str = " << str[j] << " str2 = " << str2[k] << " cou = " << cou[j][k] << endl;
	}
      }
    }


    cout << max << endl;
      
    max = 0;

    for(int j = 0;j <= s;j++){
      for(int k = 0;k <= s2;k++){
	cou[j][k] = 0;
      }
    }
  }
}


	  