#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int delete_piece();

int puzzle[10][5];
int h;

int main()
{
    while(1){
        cin >> h;
        if(h == 0) break;
        for(int i = h - 1; i >= 0; i--){
            for(int j = 0; j < 5; j++){
                cin >> puzzle[i][j];
            }
        }
        int get_score = 0;
        int total_score = 0;
        while(1){
            get_score = delete_piece();
            if(get_score == 0) break;
            else total_score += get_score;
        }
        cout << total_score << endl;
    }
    return 0;
}

int delete_piece()
{
    int sum_score = 0;
    for(int i = h - 1; i >= 0; i--){
        int delete_start = 0;
        int delete_end = 0;
        for(int j = 0; j < 3; j++){
            if(puzzle[i][j] != 0 && puzzle[i][j] == puzzle[i][j + 1] && puzzle[i][j] == puzzle[i][j + 2]){
                delete_start = j;
                if(j == 0){
                    if(puzzle[i][j] == puzzle[i][j + 3]){
                        if(puzzle[i][j] == puzzle[i][j + 4]) delete_end = 5;
                        else delete_end = 4;
                    } else delete_end = 3;
                } else if(j == 1){
                    if(puzzle[i][j] == puzzle[i][j + 3]) delete_end = 4;
                    else delete_end = 3;
                } else delete_end = 3;
                break;
            }
        }
        if(delete_end == 0) continue;
        sum_score += puzzle[i][delete_start] * delete_end;
        for(int j = delete_start; j < delete_start + delete_end; j++){
            puzzle[i][j] = 0;
        }
    }
    if(sum_score == 0) return 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < 5; j++){
            if(puzzle[i][j] == 0){
                if(i != h - 1){
                    for(int k = 1; i + k < h; k++){
                        if(puzzle[i + k][j] != 0){
                            puzzle[i][j] = puzzle[i + k][j];
                            puzzle[i + k][j] = 0;
                            break;
                        }
                    }
                } else puzzle[i][j] = 0;
            }
        }
    }
    return sum_score;
}