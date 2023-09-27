#include <bits/stdc++.h>

using namespace std;

struct dice{
	vector<int> diceindex{0,1,2,3,4,5};
    vector<int> dicenum{1,2,3,4,5,6};
    
    void setNumber(vector<int> &setnum){
        for(int i = 0; i < 6; i++){
            dicenum[diceindex[i]] = setnum[diceindex[i]];
        }
        return;
    }

    vector<int> getNumber(){
        vector<int> indexed(6);
        for(int i = 0; i < 6; i++)
            indexed[i] = dicenum[diceindex[i]];

        return indexed;
    }

    void roll(char d){
        vector<int> dump = diceindex;
        vector<int> newindex(6);
        switch(d){
            case 'N':{
                vector<int> n{4,0,2,3,5,1};
                newindex = n;
              break;
            }
            case 'S':{
                vector<int> n{1,5,2,3,0,4};
                newindex = n;
              break;
            }
            case 'W':{
                vector<int> n{3,1,0,5,4,2};
                newindex = n;
              break;
            }
            case 'E':{
                vector<int> n{2,1,5,0,4,3};
                newindex = n;
              break;
            }
        }
        for(int i = 0; i < 6; i++){
            diceindex[newindex[i]] = dump[i];
        }
        return;
    }

    vector<int> getAround(int num){
        int pos;
        for(int i = 0; i < 6; i++){
            if(dicenum[i] == num){
                pos = i;
                break;
            }
        }
        vector<int> a;
        switch(pos){
            case 0:{
                vector<int> n{1,2,4,3};
                a = n;
                break;
            }
            case 1:{
                vector<int> n{5,2,0,3};
                a = n;
                break;
            }
            case 2:{
                vector<int> n{0,1,5,4};
                a = n;
                break;
            }
            case 3:{
                vector<int> n{1,0,4,5};
                a = n;
                break;
            }
            case 4:{
                vector<int> n{0,2,5,3};
                a = n;
                break;
            }
            case 5:{
                vector<int> n{1,3,4,2};
                a = n;
                break;
            }

        }
        vector<int> re(4);
        for(int i = 0; i < 4; i++){
            re[i] = dicenum[a[i]];
        }
        return re;
    }
};

int main(){
    vector<int> dicenum(6);
    for(int i = 0; i < 6; i++){
        cin >> dicenum[i];
    }
    dice d;
    d.setNumber(dicenum);
    int q;
    cin >> q;
    for(int z = 0; z < q; z++){
        vector<int> r(2);
        cin >> r[0] >> r[1];
        vector<int> a = d.getAround(r[0]);
        int ans;
        for(int i = 0; i < 4; i++){
            if(a[i] == r[1]){
                ans = a[(i+1)%4];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}