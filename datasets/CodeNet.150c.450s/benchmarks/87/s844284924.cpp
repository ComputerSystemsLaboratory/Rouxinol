#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
using namespace std;

int erase(vector<vector<int>>& field) {
    int H = field.size(), W = 5;
    int score = 0;

    for(int i = 0; i < H; ++i) {
        int target = 0, right = 0;
        int count = 0;
        for(int j = 1; j < W; ++j) {
            if(field[i][j] == field[i][j - 1]) ++count;
            else count = 0;
            if(count > 1) {
                target = field[i][j];
                right = j;
            }
        }

        for(int j = right; j >= 0; --j) {
            if(field[i][j] != target) break;
            score += target;
            field[i][j] = 0;
        }
    }

    return score;
}

void fall(vector<vector<int>>& field) {
    int H = field.size(), W = 5;
    for(int j = 0; j < W; ++j) {
        for(int i = H - 1; i > 0; --i) {
            if(field[i][j] != 0) continue;
            for(int k = i - 1; k >= 0; --k) {
                if(field[k][j] == 0) continue;
                swap(field[i][j], field[k][j]);
                break;
            }
        }
    }
}

int main() {
    int H, W = 5;
    while(cin >> H, H) {
        vector<vector<int>> field(H, vector<int>(W));
        for(int i = 0; i < H; ++i) for(int j = 0; j < W; ++j) cin >> field[i][j];

        int score = 0;
        while(int add = erase(field)) {
            score += add;
            fall(field);
        }

        cout << score << endl;
    }
}