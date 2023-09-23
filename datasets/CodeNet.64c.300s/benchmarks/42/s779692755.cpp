#include <iostream>
#include <utility>
#include <queue>
using namespace std;

#define MAX_WIDTH  21
#define MAX_HEIGHT 21
#define INIT_X 10
#define INIT_Y 10

int main(){
    while(1){
        int N, M, tmp_x, tmp_y;
        int map[MAX_WIDTH][MAX_HEIGHT];
        pair<char,int> tmp_command;
        // initialization
        for(int i=0; i<MAX_WIDTH; i++){
            for(int j=0; j<MAX_HEIGHT; j++){
                map[i][j] = 0;
            }
        }
        
        // input
        cin >> N; if(!N){break;}
        for(int i=0; i<N; i++){
            cin >> tmp_x >> tmp_y;
            map[tmp_x][tmp_y] = 1;
        }
        cin >> M;
        pair<char,int> commands[M];
        for(int i=0; i<M; i++){
            cin >> tmp_command.first >> tmp_command.second;
            commands[i] = tmp_command;
        }
        
        // search
        pair<int, int> current_position(INIT_X, INIT_Y);
        map[current_position.first][current_position.second] = 0;
        for(int i=0; i<M; i++){
            char direction = commands[i].first;
            int  step      = commands[i].second;
            int delta_x=0, delta_y=0;

            switch(direction){
            case 'N': delta_x =  0, delta_y =  1; break; 
            case 'E': delta_x =  1, delta_y =  0; break;
            case 'S': delta_x =  0, delta_y = -1; break;
            case 'W': delta_x = -1, delta_y =  0; break;
            }
            
            for(int i=0; i<step; i++){
                current_position.first  += delta_x;
                current_position.second += delta_y;
                map[current_position.first][current_position.second] = 0;
            }
        }

        // result
        bool flag = true;
        for(int i=0; i<MAX_WIDTH; i++){
            for(int j=0; j<MAX_HEIGHT; j++){
                if( map[i][j] ){ flag = false; }
            }
        }
        if( flag ){ cout << "Yes\n"; }
        else{ cout << "No\n"; }
                
    }
    return 0;
}