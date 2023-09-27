#include <iostream>
#include <list>
#include <string>
using namespace std;

void display(list<int> & lst){
    if (!lst.empty()){
        cout << lst.front();
        lst.pop_front();
    }
    for (auto element : lst){
        cout << ' ' << element;
    }
    cout << endl;    
}

int main()
{
    ios::sync_with_stdio(false);
    list<int> lst;
    int n = 0;
    cin >> n;
    for (int i = 0; i != n; ++i){
        string command;
        cin >> command;
        if (command == "insert"){
            int x = 0;
            cin >> x;
            lst.push_front(x);
        }else if (command == "delete"){
            int x = 0;
            cin >> x;
            for (auto it = lst.begin(); it != lst.end(); ++it){
                if (*it == x){
                    lst.erase(it);
                    break;
                }
            }
        }else if (command == "deleteFirst"){
            lst.pop_front();
        }else if (command == "deleteLast"){
            lst.pop_back();
        }
    }
    display(lst);
    return 0;
}