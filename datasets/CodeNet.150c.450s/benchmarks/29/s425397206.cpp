#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    string str;
    int num;
    list<int> L;

    for(int i=0; i<n; ++i){
        cin >> str;
        if( str == "insert"){
            cin >> num;
            L.push_front(num);
        }else if( str == "delete" ){
            cin >> num;
            for(auto itr=L.begin(); itr!=L.end(); ++itr){
                if(*itr == num){
                    L.erase(itr);
                    break;
                }
            }
        }else if(str == "deleteFirst"){
            L.pop_front();
        }else if( str == "deleteLast"){
            L.pop_back();
        }
    }


    for(auto itr = L.begin(); itr!=L.end(); ++itr){
        if(itr != L.begin()){
            cout << ' ';
        }
        cout << *itr;
    }
    cout << endl;

    return 0;
}

