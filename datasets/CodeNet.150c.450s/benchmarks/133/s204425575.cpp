#include<bits/stdc++.h>

using namespace std;

int main(){
    int d;
    cin >> d;

    vector<int> c;
    for(int i=0; i<26; i++){
        int tmp;
        cin >> tmp;
        c.push_back(tmp);
    }
    
    vector<vector<int>>  s(d,vector<int>(26,0));
    for(int i=0; i<d; i++){
        for(int j=0; j<26; j++){
            cin >> s[i].at(j);
        }
    }

    vector<int> t;
    for(int i=0; i<d; i++){
        int tmp;
        cin >> tmp;
        t.push_back(tmp);
    }

    vector<int> last(26,0);
    int ans = 0;
    int i = 0;
    while(i<d){
        int dec = 0;
        //cout << s[i][t[i]-1] << endl;
        ans += s[i][t[i]-1];
        /*
        for(int j=0; j<26; j++){
            last[i]++;
        }
        */
        last[t[i]-1] = i+1;
        for(int j=0; j<26; j++){
            dec += c[j] * (i+1-last[j]);
        }
        ans -= dec;
        i++;
        cout << ans << endl;
    }

    /*
    //デバッグ処理
    for(int i=0; i<26; i++){
        cout << c[i] << " ";
    }
    cout << endl;
    for(int i=0; i<d; i++){
        for(int j=0; j<26; j++){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<d; i++){
        cout << t[i] << " ";
    }
    */
    return 0;
}