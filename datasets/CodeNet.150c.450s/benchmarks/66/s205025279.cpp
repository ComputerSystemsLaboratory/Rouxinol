#include<iostream>
#include<map>
using namespace std;

int main()
{
    int N, M;
    bool lock = true;
    map<string, int> list;
    cin>>N;
    while(N-- > 0) {
        string U;
        cin>>U;
        list.insert(make_pair(U, 1));
    }
    cin>>M;
    while(M-- > 0) {
        string T;
        cin>>T;
        if(list.count(T)) {
            if(lock) cout<<"Opened by "<<T<<endl;
            else cout<<"Closed by "<<T<<endl;
            lock = !lock;
        } else {
            cout<<"Unknown "<<T<<endl;
        }
    }
}