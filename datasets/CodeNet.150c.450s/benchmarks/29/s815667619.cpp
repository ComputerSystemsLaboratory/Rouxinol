/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C&lang=jp*/

#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int n;
    list<int> data;
    string command;
    int value;
    list<int>::iterator it;

    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>command;
        if(command=="deleteFirst"){
            data.pop_front();
        }else if(command=="deleteLast"){
            data.pop_back();
        }else{
            cin>>value;
            if(command=="insert"){
                data.push_front(value);
            }else{
                it=find(data.begin(),data.end(),value);
                if(it!=data.end()){
                    data.erase(it);
                }
            }
        }
    }
    it=data.begin();
    while(it!=data.end()){
        cout<<*it++;
        if(it!=data.end()){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}