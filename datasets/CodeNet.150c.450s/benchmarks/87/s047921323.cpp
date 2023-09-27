#include <iostream>
#include <vector>
using namespace std;

void fill_stone(vector<int> stone[5]){
    for(int i=0;i<5;++i){
        vector<int>::iterator it=stone[i].begin();
        while(it!=stone[i].end()){
            if(*it==0){
                stone[i].erase(it);
                it = stone[i].begin();
            }else ++it;
        }
    }
    for(int i=0;i<5;++i){
        for(int j=0;j<10-stone[i].size();++j){
            stone[i].push_back(0);
        }
    }
}
int erase_stone(vector<int> stone[5]){
    int score=0;
    for(int i=0;i<10;++i){
        int chain=1;
        int before=-1;
        for(int j=0;j<5;++j){
            if(stone[j][i]==before) ++chain;
            else{
                if(chain>=3){
                    score+=before*chain;
                    for(int k=j-1;k>j-chain-1;--k){
                        stone[k][i] = 0;
                    }
                }
                before = stone[j][i];
                chain = 1;
            }
        }
        if(chain>=3){
            score+=before*chain;
            for(int k=4;k>4-chain;--k){
                stone[k][i] = 0;
            }
        }
    }
    fill_stone(stone);
    return score;
}

int main(){
    while(true){
        int h;
        vector<int> stone[5];
        int cnt=0;
        int score=0;
        cin >> h;
        if(!h) break;
        for(int i=h-1;i>=0;--i){
            for(int j=0;j<5;++j){
                int k;
                cin >> k;
                stone[j].insert(stone[j].begin(),k);
            }
        }
        for(int i=h;i<10;++i){
            for(int j=0;j<5;++j){
                stone[j].push_back(0);
            }
        }
        while(true){
            score = erase_stone(stone);
            if(score > 0) cnt += score;
            else break;
        }
        cout << cnt << endl;
    }
}