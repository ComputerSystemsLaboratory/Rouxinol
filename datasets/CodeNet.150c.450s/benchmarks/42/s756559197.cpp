#include  <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char const *argv[]) {
    /* code */
    int n,q,time;
    string name;
    cin >>n;
    cin >> q;
    queue<pair<string,int> > qround;
    for(int i=0;i<n;i++){
        cin >>name;
        cin >> time;
        qround.push(make_pair(name,time));
    }

    pair <string,int> u;
    int allTime=0,a;

    while(!qround.empty()){
        u=qround.front();
        qround.pop();
        a=min(u.second,q);
        u.second -=a;
        allTime +=a;
        if(u.second>0){
            qround.push(u);
        }else{
            cout << u.first << " "<<allTime << endl;
        }
    }

    // for(int i=0;i<n;i++){
    //     cin >> q.name.pop
    // }
    return 0;
}