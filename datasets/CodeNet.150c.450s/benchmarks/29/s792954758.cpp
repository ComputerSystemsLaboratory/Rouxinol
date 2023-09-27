#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int key;
    string cmd;

    list<int> L;
    for(int i=0;i<n;++i){
        cin>>cmd;
        if(cmd=="insert"){
            cin>>key;
            L.push_front(key);
        }
        else if(cmd=="delete"){
            cin>>key;
            for(list<int>::iterator it=L.begin();it!=L.end();++it){
                if(*it==key){
                    L.erase(it);
                    break;
                }
            }
        }
        else if(cmd=="deleteFirst"){
            L.pop_front();
        }
        else if(cmd=="deleteLast"){
            L.pop_back();
        }
    }

    int i=0;
    for(list<int>::iterator it=L.begin();it!=L.end();++it){
        if(i++){cout<<" ";}
        cout<<*it;
    }
    cout<<"\n";
}