#include <iostream>
#include <vector>

using namespace std;

char news[4]={'N','E','W','S'};
int to_x[4]={0, 1, -1, 0};
int to_y[4]={1, 0, 0, -1};

int main(){
    while(1){
        int gems;
        cin >> gems;
        if(gems==0) break;
        
        vector<vector<bool> > map(21,vector<bool>(21,false));
        int x,y;
        for(int i=0; i<gems; i++){
            cin >> x >> y;
            map[y][x] = true;
        }
        x = 10;
        y = 10;
        map[y][x] = false;
        
        int command, move;
        char direction;
        cin >> command;
        for(int i=0; i<command; i++){
            cin >> direction >> move;
            for(int j=0; j<4; j++){
                if(direction == news[j]){
                    for(int k=0; k<move; k++){
                        x+=to_x[j];
                        y+=to_y[j];
                        map[y][x] = false;
                    }
                }
            }
        }
        
        bool check = false;
        for(int i=0; i<=20; i++){
            for(int j=0; j<=20; j++){
                if(map[i][j] == true) check = true;
            }
        }
        if(check) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    
    return 0;
}