#include<iostream>
#include<set>
#include<string>

using namespace std;

string message[] = {"Opened by ","Closed by "};
int cnt;
int main() {
    int n,m;
    set<string> data;
    cin>>n;
    for(int i=0;i<n;i++) {
        string ss; cin>>ss;
        data.insert(ss);
    }

    cin>>m;
    for(int i=0;i<m;i++) {
        string ss; cin>>ss;
        if(data.find(ss) == data.end()) {
            cout<<"Unknown "<<ss<<endl;
        }
        else {
            cout<<message[cnt%2]<<ss<<endl;
            cnt++;
        }
    }

    return 0;
}