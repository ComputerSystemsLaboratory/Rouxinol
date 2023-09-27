#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){
    list<int> L;
    
    int n,a;
    string command;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> command;
        if(command=="insert"){
            cin >> a;
            L.push_front(a);
        }else if(command=="delete"){
            cin >> a;
            for(list<int>::iterator it=L.begin(); it!=L.end(); it++){
                if(*it==a){
                    L.erase(it);
                    break;
                }
            }
        }else if(command=="deleteFirst"){
            L.pop_front();
        }else if(command=="deleteLast"){
            L.pop_back();
        }
    }
    
    int i=0;
    for(list<int>::iterator it=L.begin(); it!=L.end(); it++){
        if(i++) cout <<  ' ';
        cout << *it;
    }
    
    cout << endl;
    
    return 0;
}