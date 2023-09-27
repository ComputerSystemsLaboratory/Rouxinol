#include <iostream>
using namespace std;
string kei[] = {".,!? ","abc","def","ghi",
		"jkl","mno","pqrs","tuv","wxyz",};

int main(){
  string str;
  int n;
  cin >> n;
  while(n--){
    cin >> str;
    int cnt = 0;
    for(int i = 0 ; i < str.size()-1 ; i++ ){
      if(str[i] == str[i+1] && str[i] != '0')cnt++;
      if(str[i] == '0' && str[i+1] == '0')continue;
      if(str[i]!='0' && str[i+1] == '0'){
	cout << kei[(str[i]-'0')-1][cnt%(kei[(str[i]-'0')-1].size())];  
	cnt = 0;
      }
    }
    cout << endl;
  }
}