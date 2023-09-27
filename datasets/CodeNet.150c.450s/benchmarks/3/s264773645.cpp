// Transformation.cc
// 文字列 str に対して、与えられた命令の列を実行するプログラムを
// 作成してください。命令は以下の操作のいずれかです：
//
// ・print a b: strの a 文字目から b 文字目までを出力する。
// ・reverse a b: strの a 文字目から b 文字目までを逆順にする。
// ・replace a b p: strの a 文字目から b 文字目までを p に置き換える。
//
// ここでは、文字列 strの最初の文字を 0 文字目とします。
//
// 【入力】
// 1 行目に文字列 str が与えられます。strは英小文字のみ含みます。
// 2 行目に命令の数 qが与えられます。
// 続く q行に各命令が上記の形式で与えられます。
// 【出力】
// 各 print 命令ごとに文字列を１行に出力してください。
// 【制約】
// ・1≤strの長さ≤1000
// ・1≤q≤100
// ・0≤a≤b<strの長さ
// ・replace 命令では b−a+1=pの長さ
// 【例】
// 入力１：
// abcde
// 3
// replace 1 3 xyz
// reverse 0 2
// print 1 4
// 出力１：
// xaze
// 入力２：
// xyz
// 3
// print 0 2
// replace 0 2 abc
// print 0 2
// 出力２：
// xyz
// abc
#include<iostream>
#include<string>
using namespace std;

void print( string str, int a, int b) {
  for ( int i = a; i <= b; i++) {
    cout << str[i];
  }
  cout << endl;
}

string reverse( string str, int a, int b) {
  char swap_c;

  for ( int i = a, j = b; i < j; i++, j--) {
    swap_c = str[i]; str[i] = str[j]; str[j] = swap_c;
  }

  return str;
}

string replace( string str1, string str2, int a, int b) {
  str1.erase( a, b-a+1);
  str1.insert( a, str2);

  return str1;
}

int main( void) {
  string str;
  int op_num;
  string op;
  int a, b;
  string rep_str;

  cin >> str;
  cin >> op_num;

  for ( int i = 0; i < op_num; i++) {
    cin >> op >> a >> b;
    if ( op == "print") print( str, a, b);
    else if ( op == "reverse") str = reverse( str, a, b);
    else if ( op == "replace") {
      cin >> rep_str;
      str = replace( str, rep_str, a, b);
    }
  }

  return 0;
}

