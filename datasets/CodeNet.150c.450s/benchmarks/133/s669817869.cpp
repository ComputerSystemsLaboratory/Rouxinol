#include<iostream>
#include<vector>
using namespace std;


int main(){
    int d;
    cin >> d;
    vector<int> c(26,0);
    vector<int> last(26,0);
    vector<int> t(d,0);
    vector<int> v(d,0);

    int s[d][26];
    for(int i=0;i<26;i++){
        cin >> c[i];
    }

    for(int i=0;i<d;i++){
        for(int j=0;j<26;j++){
            cin >> s[i][j];
        }
    }

    for(int i=0;i<d;i++){
        cin >> t[i];
        t[i]--;
    }

    for(int i=0;i<d;i++){
        last[t[i]] = i+1;
        if(i==0){
            v[i] = s[i][t[i]];
        }else{
            v[i] = v[i-1] + s[i][t[i]];
        }

        for(int j=0;j<26;j++){
            v[i] -= c[j]*(i+1-last[j]);
        }
    }

    for(int i=0;i<d;i++){
        cout << v[i] << endl;
    }

}