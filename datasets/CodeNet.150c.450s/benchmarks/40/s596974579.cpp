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
};

int main(){
    vector<int> dicenum(6);
    for(int i = 0; i < 6; i++){
        cin >> dicenum[i];
    }
    string s;
    cin >> s;
    dice d;
    d.setNumber(dicenum);
    
    for(int i = 0,iend = s.size(); i < iend; i++){
        d.roll(s[i]);
    }
    
    dicenum = d.getNumber();
    cout << dicenum[0] << endl;
	return 0;
}