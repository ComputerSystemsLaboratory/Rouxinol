#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main(){
    list<int> lst;

    int N;
    cin >> N;

    string command;
    int num;
    for(int i=0; i<N; i++){
        cin >> command;
        if( command == "insert" ){
            cin >> num;
            lst.push_front(num);
        }else if( command == "delete"){
            cin >> num;
            for( auto itr = lst.begin(); itr != lst.end(); itr++){
                if(*itr == num){
                    lst.erase(itr);
                    break;
                }
            } 
        }else if( command == "deleteLast"){
            lst.pop_back();
        }else if( command == "deleteFirst"){
            lst.pop_front();
        }
    }

    for(auto itr = lst.begin(); itr != lst.end(); itr++){
        if(itr == lst.begin()){
            cout << *itr;
        }else{
            cout << " " << *itr;
        }
    }
    cout << endl;
    return 0;
}