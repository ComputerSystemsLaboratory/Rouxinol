#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int n,i,x;
    string com;
    list<int> L;
    list<int>::iterator it;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>com;
        if(com=="insert"){
            cin>>x;
            L.push_front(x);
        }else if(com=="delete"){
            cin>>x;
            for(it=L.begin();it!=L.end();it++){
                if((*it)==x){L.erase(it);break;}
            }
        }else if(com=="deleteFirst"){
            L.pop_front();
        }else if(com=="deleteLast"){
            L.pop_back();
        }
    }
    if(!L.empty()){
        it=L.begin();
        cout<<(*it);
        for(it++;it!=L.end();it++) cout<<" "<<(*it);
    }
    cout<<endl;
    return 0;
}
