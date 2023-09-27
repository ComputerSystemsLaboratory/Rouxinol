#include <iostream>
#include <vector>

using namespace std;

int main(){
    while(1){
        int cand, boul;
        cin >> cand >> boul;
        if(cand==0 && boul==0) break;
        
        int turn = 0;
        int allstone = boul;
        vector<int> stone(50,0);
        
        while(1){
            if(boul == 0){
                if(stone[turn] == allstone){
                    cout << turn << endl;
                    break;
                }else{
                    boul = stone[turn];
                    stone[turn] = 0;
                }
            }else{
                stone[turn]++;
                boul--;
            }
            turn = (turn+1)%cand;
        }
    }
            
    return 0;
}