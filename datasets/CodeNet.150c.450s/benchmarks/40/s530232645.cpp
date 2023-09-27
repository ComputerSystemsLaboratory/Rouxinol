#include <iostream>
#include <algorithm>
#include <array>
#include <string>

class Dice{
    /* left-hand dice      right-hand dice
            +---+                +---+    
            | 1 |                | 1 |    
    +---+---+---+---+    +---+---+---+---+
    | 5 | 3 | 0 | 2 |    | 5 | 2 | 0 | 3 |
    +---+---+---+---+    +---+---+---+---+
            | 4 |                | 4 |    
            +---+                +---+    
    */
    public:
    std::array<int, 6> state;
    Dice(bool isRight=false):state(std::array<int, 6>{{1, 2, (isRight)?3:4, (isRight)?4:3, 5, 6}}){}
    Dice(std::array<int, 6> d, bool isRight=false):state(d){if(isRight){int tmp=state[2];state[2]=state[3];state[3]=tmp;}}
    void RollTo(int d){
        /*
            0
            |
        2 --#-- 1
            |
            3
        */
        std::array<int, 6> tmp(state);
        switch(d){
            case 0: state[0] = tmp[4]; state[1] = tmp[0]; state[4] = tmp[5]; state[5] = tmp[1]; break;
            case 1: state[0] = tmp[3]; state[2] = tmp[0]; state[3] = tmp[5]; state[5] = tmp[2]; break;
            case 2: state[0] = tmp[2]; state[2] = tmp[5]; state[3] = tmp[0]; state[5] = tmp[3]; break;
            case 3: state[0] = tmp[1]; state[1] = tmp[5]; state[4] = tmp[0]; state[5] = tmp[4]; break;
        }
    }
    void RollTo(char c){
        switch(c){
            case 'N': RollTo(0); break;
            case 'E': RollTo(1); break;
            case 'W': RollTo(2); break;
            case 'S': RollTo(3); break;
        }
    }
    void Rotate(int d){
        /* 90d degrees clockwise
         -> 0 ->
        ^   |   v
        2 --#-- 1
        ^   |   v
         <- 3 <-
        */
        d%=4;
        std::array<int, 6> tmp(state);
        switch(d){
            case 0: state[1] = tmp[1]; state[2] = tmp[2]; state[4] = tmp[4]; state[3] = tmp[3]; break;
            case 1: state[1] = tmp[3]; state[2] = tmp[1]; state[4] = tmp[2]; state[3] = tmp[4]; break;
            case 2: state[1] = tmp[4]; state[2] = tmp[3]; state[4] = tmp[1]; state[3] = tmp[2]; break;
            case 3: state[1] = tmp[2]; state[2] = tmp[4]; state[4] = tmp[3]; state[3] = tmp[1]; break;
        }
    }
};  

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::array<int, 6> state;
    for(auto& i : state){
        std::cin >> i;
    }
    std::string command;
    std::cin >> command;
    Dice d(state, true); d.Rotate(2);
    for(const auto& c : command){
        d.RollTo(c);
    }
    std::cout << d.state[0] << "\n";
    return 0;
}