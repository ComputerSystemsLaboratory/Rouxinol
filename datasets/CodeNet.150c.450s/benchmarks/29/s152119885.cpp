#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <queue>
#include <stack>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
  int commandNum = 0;
  list<int> li;

  string sCommand;
  int iSubCommand;
  cin >> commandNum;

  for (int i = 0; i  < commandNum; i++) {
    cin >> sCommand;
    if (sCommand == "insert") {
      cin >> iSubCommand;
      li.push_front(iSubCommand);
    }else if(sCommand == "delete"){
      cin >> iSubCommand;
      for (list<int>::iterator itr = li.begin(); itr != li.end(); itr++) {
	if (*itr == iSubCommand) {
	  li.erase(itr);
	  break;
	}
      }
    }else if(sCommand == "deleteFirst"){
      li.pop_front();
    }else if(sCommand == "deleteLast"){
      li.pop_back();
    }else{
      
    }
  }

  auto it = li.begin();
  for (; it != --li.end(); it++) {
    cout << *it << " ";
  }
  cout <<  *it << "\n";
  return 0;
}

