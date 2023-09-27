#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
  vector<string> moji(10);
  moji[1] = ".,!? ";
  moji[2] = "abc";
  moji[3] = "def";
  moji[4] = "ghi";
  moji[5] = "jkl";
  moji[6] = "mno";
  moji[7] = "pqrs";
  moji[8] = "tuv";
  moji[9] = "wxyz";
  int n =0;cin >> n;

  for(int i = 0;i < n;i++){
    string tmp;
    cin >> tmp;
    string mes = "";
    char keep;
    int flag = 0;
    for(int i = 0;i < tmp.size();i++){
      if(tmp[i] != '0'){
	flag++;
	keep = tmp[i]; 
      }else{
	if(flag > 0){
	  mes += moji[keep-'0'][(flag-1)%(moji[keep-'0'].size())];
	}
	flag = 0;
      }
    }
    cout << mes << endl;
    
    
    
  }
  return 0;
}
int string_to_int(string a){
  stringstream ss;
  ss << a;
  int num;
  ss >> num;
  return num;
}