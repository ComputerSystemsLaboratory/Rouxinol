#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

enum COMMAND_TYPE {
  INSERT,
  DELETE,
  DELETE_FIRST,
  DELETE_LAST
};

static COMMAND_TYPE fetch(string& st) {
  const string CDF = "deleteFirst";
  const string CDL = "deleteLast";
  const string CD = "delete";
  const string CI = "insert";
  
  if (st.find(CI) != string::npos) {
    return INSERT;
  } else if (st.find(CDF) != string::npos) {
    return DELETE_FIRST;
  } else if (st.find(CDL) != string::npos) {
    return DELETE_LAST;
  } else {
    return DELETE;
  }
}

static void fetchCommand(list<int>& clist, int n) {
  COMMAND_TYPE type;
  string command;
  int number;
  list<int>::iterator p;
  char buf[50];
  for (int i = 0; i < n; i++) {
    memset(buf, sizeof buf, 0);
    fgets(buf, sizeof buf, stdin);
//    scanf("%s%d", buf, &number);
    command = buf;
    type = fetch(command);
 //   printf("n = %d, i = %d, command = %d.¥n", n, i, type);
    switch (type) {
      case INSERT:
        number = atoi(&buf[7]);
        clist.push_front(number);
        break;
      case DELETE:
        number = atoi(&buf[7]);
        p = find(clist.begin(), clist.end(), number);
        if (p != clist.end()) {
          clist.erase(p);
        }
        break;
      case DELETE_FIRST:
        clist.pop_front();
        break;
      case DELETE_LAST:
        clist.pop_back();
        break;
    }
   }
}

int main() {
  char buf[50] = {};
  fgets(buf, sizeof buf, stdin);
  int n = atoi(buf);

  list<int> commandList;
  fetchCommand(commandList, n);

  list<int>::iterator it = commandList.begin();
  bool first = true;
  while (it != commandList.end()) {
    if (first) {
      cout << *it;
      first = false;
    } else {
      cout << " " << *it;
    }
    it++;
  }
  cout << endl;  

  return 0;
}

