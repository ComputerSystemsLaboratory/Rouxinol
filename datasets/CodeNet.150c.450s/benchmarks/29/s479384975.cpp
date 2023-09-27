#include <iostream>
#include <list>

using namespace std;

int main(void) {
    int w;
    string c;
    list<int> myList;
    list<int>::iterator it;
    cin >> w;
    for (int i = 0; i < w; i++) {
        cin >> c;
        if (c == "insert") {
            int x;
            cin >> x;
            myList.push_front(x);
        } else if (c == "delete") {
            int x;
            cin >> x;
            for (it = myList.begin(); it != myList.end(); it++) {
                if (*it == x) {
                    myList.erase(it);
                    break;
                }
            }
        } else if (c == "deleteLast") {
            myList.pop_back();
        } else if (c == "deleteFirst") {
            myList.pop_front();
        }
    }

    for (it = myList.begin(); it != myList.end(); it++) {
        if (it == myList.begin()) {
            cout << *it;
        }else{
            cout << ' ' << *it; 
        }
    }
    cout << endl;

    return 0;
}
