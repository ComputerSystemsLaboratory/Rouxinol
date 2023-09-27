#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n;
    vector<string> id(n);
    for(int i=0; i<n; i++)cin>>id[i];

    cin>>m;
    vector<string> have(m);
    for(int i=0; i<m; i++)cin>>have[i];

    bool flag = false,search;

    for(int i=0; i<m; i++){
        search = false;
        for(int j=0; j<n; j++){
            if(have[i] == id[j]) search = true;
        }
        if(search && flag){
            cout<<"Closed "<<"by "<<have[i]<<endl;
            flag = false;
        }

        else if(search && !flag){
            cout<<"Opened "<<"by "<<have[i]<<endl;
            flag = true;
        }

        else cout<<"Unknown "<<have[i]<<endl;
    }

    return 0;
}
