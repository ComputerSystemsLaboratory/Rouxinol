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
      if(1<=num[j] && num[j]<=9 && but==0){
	but = num[j];
      }else if(1<=num[j] && num[j]<=9 && but!=0){
	push++; //cout << "pushed" << endl;
      }else if(num[j]==0 && but && but!=1 && but!=7 && but!=9){
	word.push_back(button[but-1][push%3]); //cout << button[but-1][push%3] << endl;
	push = 0;
	but = 0;
      }else if(num[j]==0 && but && (but==7 || but==9)){
	word.push_back(button[but-1][push%4]); //cout << button[but-1][push%4] << endl;
	push = 0;
	but = 0;
      }else if(num[j]==0 && but && but==1){
	word.push_back(button[but-1][push%5]); //cout << button[but-1][push%4] << endl;
	push = 0;
	but = 0;
      }else if(num[j]==0 && !but){
	continue;
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