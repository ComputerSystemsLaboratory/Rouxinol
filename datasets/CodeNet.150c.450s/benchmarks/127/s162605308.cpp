#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(){
  int m;
  string str;
  cin >> m;

  while(m--){
    set <string> train;
    cin >> str ;

    for(unsigned int i=1;i < str.size();i++){
      string str1[2],str2[2];
      str1[0] = str.substr(0,i);
      str1[1] = "";

      for(int j=str1[0].size()-1;j >= 0;j--){
        str1[1] += str1[0][j];
      }

      str2[0] = str.substr(i);
      str2[1] = "";

      for(int j=str2[0].size()-1;j >= 0;j--){
        str2[1] += str2[0][j];
      }


      for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
          if(train.empty()) train.insert(str1[j] + str2[k]);
          if(train.find(str1[j] + str2[k]) == train.end()) train.insert(str1[j] + str2[k]);
          if(train.find(str2[j] + str1[k]) == train.end()) train.insert(str2[j] + str1[k]);
        }
      }

    }
    cout << train.size() << endl;
  }
  return 0;
}