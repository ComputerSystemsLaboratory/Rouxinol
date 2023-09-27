#include <queue>
#include <iostream>
#include <string>
using namespace std;

int x;
string order;
int num;

int main() {
  priority_queue<int> Q; //int型を格納するキュー
  while (cin >> order){
    if (order == "insert"){
	  cin >> num;
	  Q.push(num);
	  }
	else if (order == "extract"){
	  int n = Q.top();
	  Q.pop();
	  cout << n << endl;
	  }
	else if (order == "end") break;
	  }
}
  