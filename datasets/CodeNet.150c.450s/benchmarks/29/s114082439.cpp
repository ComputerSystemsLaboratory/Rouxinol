#include <iostream>
#include <string>
#include <deque>

using namespace std;

void printDeque(deque<int> &d){
    deque<int>::iterator ite = d.begin();
    while(ite != d.end()){
        if(ite != d.begin())
            cout << " ";
        cout << *ite;
        ite++;
    }
    cout << endl;    
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    deque<int> d;
    while(n--){
        string cmd;
        int val;
        cin >> cmd;
        if(cmd.compare("insert") == 0){
            cin >> val;
            d.push_front(val);
        }else if(cmd.compare("delete") == 0){
            cin >> val;
            deque<int>::iterator ite = d.begin();
            while(ite != d.end()){
                if(val == *ite){
                    d.erase(ite);
                    break;
                }
                ite++;
            }
        }else if(cmd.compare("deleteFirst") == 0){
            d.pop_front();
        }else if(cmd.compare("deleteLast") == 0){
            d.pop_back();
        }
    }
    printDeque(d);
    return 0;
}