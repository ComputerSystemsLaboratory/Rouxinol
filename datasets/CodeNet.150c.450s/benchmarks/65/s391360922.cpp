#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int N;
    string c1[36], c2[36];
    cin >> N;
    for(int i=0;i<N;i++) cin >> c1[i];
    for(int i=0;i<N;i++) c2[i]=c1[i];

    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
            if(c1[j][1]<c1[j-1][1]){
                string tmp=c1[j];
                c1[j]=c1[j-1];
                c1[j-1]=tmp;
            }
        }
    }
    for(int i=0;i<N;i++){
        int minj = i;
        for(int j=i;j<N;j++){
            if(c2[j][1]<c2[minj][1]) minj=j;
        }
        string tmp=c2[i];
        c2[i]=c2[minj];
        c2[minj]=tmp;
    }

    cout << c1[0];
    for(int i=1;i<N;i++) cout << ' ' << c1[i];
    cout << endl << "Stable" << endl;
    cout << c2[0];
    for(int i=1;i<N;i++) cout << ' ' << c2[i];
    cout << endl;

    bool isStable=true;
    for(int i=0;i<N;i++){
        if(c1[i]!=c2[i]) isStable=false;
    }
    cout << (isStable?"Stable":"Not stable") << endl;

    return 0;
}
