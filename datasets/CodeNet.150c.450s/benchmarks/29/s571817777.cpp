#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){

    int n;
    list<int> l;
    list<int>::iterator it;
    while(cin>>n){
        string op;
        int num;
        while(n--){
            cin>>op;
            if(op=="insert"){
                cin>>num;
                l.push_front(num);
            }
            else if(op=="delete"){
                cin>>num;
                for(it=l.begin();it!=l.end();++it){
                    if(*it==num){
                        l.erase(it);
                        break;
                    }
                        
                }
            }
            else if(op=="deleteFirst")
                l.pop_front();
            else
                l.pop_back();
        }

        int t=0;
        for(it=l.begin();it!=l.end();++it){
            if(t++) cout<<" ";
            cout<<*it;
        }
        cout<<endl;
    }
}
