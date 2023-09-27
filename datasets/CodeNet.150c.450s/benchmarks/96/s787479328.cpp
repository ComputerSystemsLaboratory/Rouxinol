#include<iostream>
#include<string>
using namespace std;

int main(){
  string moji[]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int i,j,n;
  string figure;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> figure;
    int count=0;
    for(j = 0; j < figure.size(); j++){
      if(figure[j]-'0'==0){
	continue;
      }else if(figure[j]-'0'!=0){
	char suuji=figure[j];
	if(figure[j+1]-'0'==0){
	  cout << moji[suuji-'0'-1][count%(moji[suuji-'0'-1]).size()];
	  count=-1;
	}
	count++;
      }
    }
    cout << endl;
      }
  return 0;
}