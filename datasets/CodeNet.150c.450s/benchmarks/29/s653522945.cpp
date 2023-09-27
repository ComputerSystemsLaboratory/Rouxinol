#include <iostream>
#include <cstdio>
#include <list>
using namespace std;

int main() {
    int n; scanf("%d",&n);
    list<int> v;
    for(int i=0;i<n;i++){
        char com[15]; int x; scanf("%s",com);
        if(com[0]=='i'){
            scanf("%d",&x); v.push_front(x);
        }
        else if(com[6]=='F'){
            v.pop_front();
        }
        else if(com[6]=='L'){
            v.pop_back();
        }
        else if(com[0]=='d'){
            scanf("%d",&x);
            for(list<int>::iterator itr=v.begin();itr!=v.end();++itr){
                if(*itr==x){v.erase(itr); break;}
            }
        }
    }
    int i=0;
    for(list<int>::iterator itr=v.begin();itr!=v.end();++itr){
        if(i++) cout << " ";
        cout << *itr;
    }
    cout << endl;
    return 0;
}