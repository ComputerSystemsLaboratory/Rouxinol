#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string order;
vector<int> num;
vector<char> word;
int n;
char button[9][5] = {{'.',',','!','?',' '},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};

int main()
{
  int but = 0,push = 0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> order;
    for(int j=0;j<order.size();j++){
      num.push_back((int)(order[j]-'0'));
    }
    for(int j=0;j<num.size();j++){
      if(1<=num[j] && num[j]<=9){
	if(but==0){
	  but = num[j];
	}else{
	  push++;
	}
      }else if(num[j]==0){
	if(but==0){
	  continue;
	}
	
	const int mod = (but == 1 ? 5 : but == 7 || but == 9 ? 4 : 3);

	word.push_back(button[but-1][push%mod]);
	push = 0;
	but = 0;
      }
    }
    
    for(int k=0;k<word.size();k++){
      cout << word[k];
    }
    cout << endl;
    
    word.clear();
    num.clear();
  }
  
  return 0;
  
}