#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main(void){
    string state;
    cin >> state;
    stack<pair<int, int> > border;
    int count = 0, height = 0, maxheight = 0;
    double sum = 0;

    for(int i = 0; i < state.size(); ++i){
        if(state[i] == '\\'){
            if((border.size() % 2) == 0) border.push(make_pair(i, height));
            height--;
        }else if(state[i] == '/'){
            height++;
            if(maxheight < height){
                maxheight = height;
                continue;
            }
            if((border.size() % 2) == 1){
                border.push(make_pair(i, height));
            }else{
                while(1){
                    border.pop();
                    if(border.top().second >= height) {
                        // pair<int, int> t = border.top();
                        // border.pop();
                        // while(1){
                        //     if(t.second == height){
                        //         border.push(t);
                        //         break;
                        //     }else{
                        //         if(state[++t.first] == '\\') {
                        //             t.second--;
                        //         }else t.first++;
                        //     }
                        // }
                        border.push(make_pair(i, height));
                        break;
                    }
                    else border.pop();
                }
            }
        }
        // cout << i << ' ' << border.top().first << ' ' << border.top().second << endl;
    }
    if((border.size() % 2) == 1) border.pop();
    count = border.size() / 2;
    // while(!(border.empty())){
    //     cout << border.top().first << ' ' << border.top().second << endl;
    //     border.pop();
    // }
    // cout << endl;
    if(count == 0) {
        cout << 0 << endl << 0 << endl;
        return 0;
    }

    vector<double> S;
    int num = -1;
    while(!(border.empty())) {
        pair<int, int> border1, border2;
        border1 = border.top();
        border.pop();
        border2 = border.top();
        border.pop();
        int poolheight = border1.second;
        height = border2.second;
        S.push_back(0);
        num++;
        for(int i = border2.first; i <= border1.first; ++i){
            if(state[i] == '\\'){
                if(poolheight >= height) S[num] += (0.5 + (poolheight - height));  
                height--;
            }else if(state[i] == '_'){
                if(poolheight >= height) S[num] += (poolheight - height);
            }else if(state[i] == '/'){
                height++;
                S[num] += (0.5 + (poolheight - height));
            }
        }
            sum += S[num];
    }
    cout << (int)sum << endl << count << ' ';
    for(int i = num; i > 0; --i){
        cout << (int)S[i] << ' ';
    }
    cout << (int)S[0] << endl;
    return 0;
}
