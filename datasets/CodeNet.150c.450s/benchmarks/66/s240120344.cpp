#include <iostream>
#include <unordered_set>
using namespace std;
class Door {
  public:
    bool isOpened;
    void openedBy(string id) {
      isOpened = true;
      cout << "Opened by " << id << endl;
    }
    void closedBy(string id) {
      isOpened = false;
      cout << "Closed by " << id << endl;
    }
    void toggledBy(string id) {
      (isOpened) ? closedBy(id) : openedBy(id);
    }
};

int main() {
  unordered_set<string> registedIds;
  int nRegistedIds;
  cin >> nRegistedIds;
  for(int i = 0; i < nRegistedIds; ++i) {
    string id;
    cin >> id;
    registedIds.insert(id);
  }
  Door door;
  int nTryIds;
  cin >> nTryIds;
  for(int i = 0; i < nTryIds; ++i) {
    string id;
    cin >> id;
    if(registedIds.find(id) != registedIds.end()) {
      door.toggledBy(id);
    } else {
      cout << "Unknown " << id << endl;
    }
  }
  return 0;
}