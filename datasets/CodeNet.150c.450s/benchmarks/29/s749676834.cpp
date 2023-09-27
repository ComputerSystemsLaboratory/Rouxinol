#include<iostream>
#include<string>
#include<list>
using namespace std;



int main(){
    int n;
    list<int> N;
    cin >> n;
    string command;
    
    int a;
    for(int i=0; i<n; i++){
        cin >> command;
        
        if(command=="insert"){
            cin >> a;
            N.push_front(a);
        }else if(command=="delete"){
            cin >> a;
            for(list<int>::iterator it=N.begin(); it!=N.end(); it++){
                if(*it == a){
                    N.erase(it);
                    break;
                }
            }
        }else if(command=="deleteFirst"){
            N.pop_front();
        }else if(command=="deleteLast"){
            N.pop_back();
        }
    }
    
    int i=0;
    for(list<int>::iterator it=N.begin(); it!=N.end(); it++){
        if(i++) cout << " ";
        cout << *it;
    }
    cout << endl;
}