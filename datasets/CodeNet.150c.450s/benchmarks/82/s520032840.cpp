#include<iostream>
#include<vector>
using namespace std;

class Dice{
    vector<int> x;

    void advance_vertical(){ 
        advance(0, 1, 5, 4); // N方向
    }
    
    void advance_horizontal(){ 
        advance(0, 3, 5, 2); // E方向
    }

    void advance_rotation(){
        advance(1, 2, 4, 3);
    }

    void advance(int i, int j, int k, int l){
        int tmp = x[i]; 
        x[i] = x[j];
        x[j] = x[k];
        x[k] = x[l];
        x[l] = tmp;
    }

public:
    Dice(vector<int>& x) : x(x) {}
    
    void roll(const string& command){
        for(const auto c : command){
            if(c == 'E'){
                advance_horizontal();
            }
            else if(c == 'N'){
                advance_vertical();
            }
            else if(c == 'S'){
                for(int i = 0; i < 3; ++i){
                    advance_vertical();
                }
            }
            else{
                for(int i = 0; i < 3; ++i){
                    advance_horizontal();
                }
            }
        }      
    }

    int getNow(){
        return x[0];
    }

    int getRightSide(int top_side, int front){
        for(int i = 0; i < 6; i++){ // 面一つずつ見ていく
            for(int j = 0; j < 4; j++){ // rotate方向 4回す
                if(x[0] == front && x[4] == top_side){
                    return x[2];
                }
                advance_rotation();
            }
            if(i % 2 == 0){
                advance_vertical();
            }
            else{
                advance_horizontal();
            }
        }
        return 0; // 失敗
    }
};

int main(){

    vector<int> x(6);
    for(int i = 0; i < 6; ++i){
        cin >> x[i];
    }
    Dice dice(x);

    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        int top_side, front;
        cin >> top_side >> front;
        cout << dice.getRightSide(top_side, front) << endl;
    }

    return 0;
}
