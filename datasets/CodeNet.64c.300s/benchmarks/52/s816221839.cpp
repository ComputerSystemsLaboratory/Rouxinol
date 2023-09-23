#include    <iostream>
#include    <algorithm>

using namespace std;

int main() {
    // 数字リスト
    const int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    while(1) {
        int n, s;

        cin >> n >> s;
        if(n == 0 && s == 0) { break; }

        // 0-1のフラグ配列を定義
        // nの数だけフラグを立てておき、next_permutationで順列を順次生成する
        // 全列挙を得るため、逆方向からフラグを立てる
        char flag[10] = {0};
        for(int i = 0; i < n; i++) { flag[9-i] = 1; }
        
        int count = 0;
        // フラグ配列の全列挙から異なる数字組を生成
        do {
            int sum = 0;
            
            // フラグが立っている箇所に相当する数字の総和をとる
            for(int i = 0; i < 10; i++) 
                if(flag[i]) { sum += nums[i]; }
            
            // 総和が入力と一致したものをカウント
            if(sum == s) { count++; }
        } while(next_permutation(flag, flag + 10));

        cout << count << endl;
    }
}
