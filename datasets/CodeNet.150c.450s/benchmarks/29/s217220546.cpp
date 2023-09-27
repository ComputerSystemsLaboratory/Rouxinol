#include <iostream>
#include <list>

using namespace std;
typedef int lli;

list<lli> l;
lli n;

int main(){
    string c;
    lli x;
    list<lli>::iterator itr;
    cin >> n;
    for(lli i = 0;i < n;i++){

        cin >> c;
        if(c == "insert"){
            cin >> x;
            l.push_front(x);
        }else if(c == "delete"){
            cin >> x;
            for(itr = l.begin();itr != l.end();itr++){
                if(*itr == x){
                    l.erase(itr);
                    break;
                }
            }
        }else if(c == "deleteFirst"){
            l.pop_front();
        }else if(c == "deleteLast"){
            l.pop_back();
        }
    }
    bool flag = false;
    for(itr=l.begin();itr!=l.end();++itr){
        if(flag==false){
            cout << *itr;
            flag=true;
        }
        else cout << " " << *itr;
    }
    cout << endl;
    return 0;
}