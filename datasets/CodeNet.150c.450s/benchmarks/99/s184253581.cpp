#include <iostream>
#include <string>
#include <vector>
using namespace std;

int convert2int(string str) {
    int num = 0, a = 1;
    // 1文字ずつ見ていく
    for(unsigned int i = 0; i < str.size(); ++i) {
        // 入力されたものが数値だった場合、係数に入れる
        if('0' <= str[i] && str[i] <= '9') {
            a = str[i] - '0';
        }
        // 入力されたものが文字だった場合、適切に変換する
        else {
            switch(str[i]) {
            case 'm':
                num += a * 1000;
                break;
            case 'c':
                num += a * 100;
                break;
            case 'x':
                num += a * 10;
                break;
            case 'i':
                num += a;
                break;
            }
            // 係数を1に初期化する
            a = 1;
        }
    }
    return num;
}

string convert2mcxi(int num) {
    string str;
    int buf;
    // 整数値1桁ずつ回していく
    int cnt = 0;
    for(int i = 1000; i > 0; i /= 10) {
        // iの位をbufに入れる
        buf = num / i;
        // numからiの位を取り除く
        num %= i;
        // 2以上だったら数字を明記
        if(buf > 1) {
            str.push_back(buf + '0');
        }
        // 対応する位の文字を表示
        if(buf > 0) {
            str.push_back("mcxi"[cnt]);
        }
        ++cnt;
    }

    return str;
}


int main() {
    int n;
    cin >> n;

    string buf;
    int numA, numB;
    for(int i = 0; i < n; ++i) {
        // 入力を受け取って変換
        cin >> buf;
        numA = convert2int(buf);
        cin >> buf;
        numB = convert2int(buf);
        // そのまま足す
        numA += numB;

        cout << convert2mcxi(numA) << endl;
    }
}