// Dice01.cc
// 次の展開図から得られるサイコロを転がすシミュレーションを行うプログラムを作成してください。
// サイコロの各面には図のとおりに 1 から 6 のラベルが割りあてられています。
// 入力としてサイコロの各面のラベルに対応する整数と、転がす命令の列が与えられるので、
// サイコロの上面の整数を出力してください。
// シミュレーションの初期状態は、図のとおりのラベルの位置でサイコロが置かれているものとします。
// 【入力】
// １行目に各面の整数が、図に示すラベルの順番に空白区切りで与えられます。
// ２行目に命令を表す１つの文字列が与えられます。命令はそれぞれ図に示す４方向を表す文字 E、N、S、W を含む文字列です。
// 【出力】
// すべての命令を実行した後のサイコロの上面の数を１行に出力してください。
// 【制約】
// ・0 ≤ 入力されるサイコロの面の数字 ≤100
// ・0 ≤ 命令を表す文字列の長さ ≤100
// 【例】
// 入力１：
// 1 2 4 8 16 32
// SE
// 出力１：
// 8
// 各面に 1, 2, 4, 8, 16, 32 と書かれたサイコロを S の方向に転がした後、E の方向に転がすと、上面の整数が 8 になります。
// 入力２：
// 1 2 4 8 16 32
// EESWN
// 出力２：
// 32
#include<iostream>
#include<string>
using namespace std;

class Dice {
public:
  int Top, Bottom, North, South, East, West;

  Dice( int num[]) {
    Top = num[0];
    Bottom = num[5];
    North = num[4];
    South = num[1];
    East = num[2];
    West = num[3];
  }
    
  void move_n( void) {
    int buf_t, buf_b, buf_n, buf_s;

    buf_t = Top;
    buf_b = Bottom;
    buf_n = North;
    buf_s = South;

    Top = buf_s;
    Bottom = buf_n;
    North = buf_t;
    South = buf_b;
  }

  void move_s( void) {
    int buf_t, buf_b, buf_n, buf_s;

    buf_t = Top;
    buf_b = Bottom;
    buf_n = North;
    buf_s = South;

    Top = buf_n;
    Bottom = buf_s;
    North = buf_b;
    South = buf_t;
  }

  void move_e( void) {
    int buf_t, buf_b, buf_e, buf_w;

    buf_t = Top;
    buf_b = Bottom;
    buf_e = East;
    buf_w = West;

    Top = buf_w;
    Bottom = buf_e;
    East = buf_t;
    West = buf_b;
  }

  void move_w( void) {
    int buf_t, buf_b, buf_e, buf_w;

    buf_t = Top;
    buf_b = Bottom;
    buf_e = East;
    buf_w = West;

    Top = buf_e;
    Bottom = buf_w;
    East = buf_b;
    West = buf_t;
  }

  void print_top( void) {
    cout << Top << endl;
  }
};

int main( void) {
  int num[6];
  string order;

  cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5];
  cin >> order;

  Dice d1( num);

  for ( int i = 0; i < order.size(); i++) {
    if ( order[i] == 'N') d1.move_n();
    else if ( order[i] == 'S') d1.move_s();
    else if ( order[i] == 'E') d1.move_e();
    else if ( order[i] == 'W') d1.move_w();
  }

  d1.print_top();

  return 0;
}

