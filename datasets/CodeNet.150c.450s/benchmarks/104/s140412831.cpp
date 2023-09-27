// あみだくじ

#include <iostream>
using namespace std;

int amida[30][2];
void read_input(int n);
void run(int w, int n);

int main() {
    int w; // w: たて棒
    int n; // n: よこ棒

    cin >> w >> n;
    read_input(n);
    run(w, n);
    return 0;
}

void run(int w, int n) {
    // 現在位置がamida[idx]のどちらかと同じだったら移動
    int final_positions[30]; // 最後の位置を溜める

    for (int start = 0; start < w; start++) {
        int current_pos = start;
        for (int idx = 0; idx < n; idx++) {
            if (current_pos == amida[idx][0]) {
                current_pos = amida[idx][1];
            } else if (current_pos == amida[idx][1]) {
                current_pos = amida[idx][0];
            }
        }
        final_positions[current_pos] = start+1;
    }
    for (int i = 0; i < w; i++)
        cout << final_positions[i] << "\n";
}

void read_input(int n){
    // read input and assign them to amida
    for (int idx = 0; idx < n; idx++) {
        int tmp;
        cin >> tmp;
        amida[idx][0] = tmp - 1; // 0から始まるインデックス
        cin.ignore(); // カンマ
        cin >> tmp;
        amida[idx][1] = tmp - 1;
    }
}

