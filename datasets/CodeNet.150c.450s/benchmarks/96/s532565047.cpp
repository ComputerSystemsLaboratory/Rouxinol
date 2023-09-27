#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  string str;
  char one[] = {'.',',','!','?',' '};
  int xxx[10] = {0,5,3,3,3,3,3,4,3,4};
  int yyy[10] = {0,0,0,3,6,9,12,15,19,22};
  cin >> n;
  while(n--){
    vector<char> msg;
    vector<int> msg_n;
    cin >> str;
    char curr = str[0];
    int num = 1;
    for(int i=1; i<str.size(); i++){
      if(str[i] == curr)
	num++;
      else{
	if(str[i-1] != '0'){
	  msg.push_back(str[i-1]);
	  msg_n.push_back(num);
	}
	num = 1;
	curr = str[i];
      }
    }
    if(curr != '0'){
      msg.push_back(curr);
      msg_n.push_back(num);
    }
    int pos, pres;
    for(int i=0; i<msg.size(); i++){
      if(msg[i] == '1')
	cout << one[(msg_n[i]+4)%5];
      else{
	pos = msg[i] - '0';
	pres = yyy[pos] + ((msg_n[i]+xxx[pos]-1) % xxx[pos]) + 'a';
	char ttt = pres;
	cout << ttt;
      }
    }
    cout << endl;
  }

  return 0;
}