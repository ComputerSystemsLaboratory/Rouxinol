#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,q,c=0,s,t;
    vector<int> S,T;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        S.push_back(s);
    }

    cin>>q;
    for(int i=0; i<q; i++){
        cin>>t;
        T.push_back(t);
    }

    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++){
            if(S[j]==T[i]){
                c++;
                break;
            }
        }
    }

    cout<<c<<endl;
}
