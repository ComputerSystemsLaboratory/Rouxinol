#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char alpha;
    while(1){
        cin.get(alpha);  //cin.getで一行読み取り
        
        if(alpha=='\n') { //改行で終了
            break;
        }
        if(isalpha(alpha)){  //アルファベッドかどうか判定
            if(islower(alpha)) { //小文字の時↓
                cout << (char)toupper(alpha); //大文字を返す (char)で型指定
            }
            if(isupper(alpha)) { //大文字の時↓
                cout << (char)tolower(alpha); //小文字を返す
            }
        }else{
            cout << alpha; //アルファベッド以外の文字はそのまま出力
        }
    }
    cout << "\n";
    return 0;
}
