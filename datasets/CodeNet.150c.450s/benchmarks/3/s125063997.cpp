/**
 * Transformation.cpp
 * Create:20180430
 * Description:文字列strに対して、
 * 与えられた命令の列を実行するプログラム
 * print a b strのa文字目からb文字目までを出力する
 * reverse a b strのa文字目からb文字目までを逆順にする
 * replace a b p strのa文字目からb文字目までをpに置き換える
 */
#include <iostream>

const std::string COMMAND_PRINT = "print";
const std::string COMMAND_REVERSE = "reverse";
const std::string COMMAND_REPLACE = "replace";

void print(const std::string &str, int a, int b);
std::string reverse(const std::string &str, int a, int b);
std::string replace(const std::string &str, int a, int b, const std::string &p);

int main(int argc, char* argv[]){
  std::string word;
  int count;

  std::cin >> word;
  std::cin >> count;
  for (int i = 0; i < count; i++){
    std::string command;
    std::string p;
    int start, end;
    std::cin >> command >> start >> end;

    if (command == COMMAND_PRINT){
      print(word, start, end);
    }
    if (command == COMMAND_REVERSE){
      word = reverse(word, start, end);
    }
    if (command == COMMAND_REPLACE){
      std::cin >> p;
      word = replace(word, start, end, p);
    }
  }

  return 0;
}

/**
 * 表示関数
 * @param str 元の文字列
 * @param a   スタート位置
 * @param b   終了位置
 */
void print(const std::string &str, int a, int b){
  std::string result = str.substr(a, (b + 1 - a));
  std::cout << result << std::endl;
}

/**
 * 逆転関数
 * @param  str 元の文字列
 * @param  a   スタート位置
 * @param  b   終了位置
 * @return     処理結果文字列
 */
std::string reverse(const std::string &str, int a, int b){
  std::string result = str.substr(0, a);
  std::string tmp = "";
  for (char c:str.substr(a, (b + 1 - a))){
    tmp = c + tmp;
  }
  result += tmp;
  result += str.substr(b + 1, (str.size() - (b + 1)));
  return result;
}

/**
 * 置換関数
 * @param  str 元の文字列
 * @param  a   スタート位置
 * @param  b   終了位置
 * @param  p   置換文字列
 * @return     処理結果文字列
 */
std::string replace(const std::string &str, int a, int b, const std::string &p){
  std::string result = str.substr(0, a);
  result += p;
  result += str.substr(b + 1, (str.size() - b));
  return result;
}
