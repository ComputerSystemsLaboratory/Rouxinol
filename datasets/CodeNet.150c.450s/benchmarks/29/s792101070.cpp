#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <cstdlib>
using namespace std;

int main(){
    int N;
    cin >> N;
    string op;
    int key;
    list<int>L;
    for(int i=0;i<N;i++){
        cin >> op;
        if(op.at(0)=='i'){
            cin >> key;
            L.push_front(key);
        }
        else if(op.size()>=7 && op.at(6)=='F'){
            L.pop_front();
        }
        else if(op.size()>=7 && op.at(6)=='L'){
            L.pop_back();
        }
        else{
            cin >> key;
            for(list<int>::iterator itr=L.begin();itr!=L.end();itr++){
                if(*itr==key){
                    L.erase(itr);
                    break;
                }
            }
        }
    }
    N=0;
    for(list<int>::iterator itr=L.begin();itr!=L.end();itr++){
        if(N++){
            cout << " ";
        }
        cout << *itr;
    }
    cout << endl;
}
