#include<iostream>
#include<algorithm>
#include<set>
#include <string>

using namespace std;     //名前空間指定
std::string str;                //string型オブジェクト str　の宣言
set<string> anser;               //文字列クラスの宣言

int main(){
    int num;
    cin >> num;
    while (num>0) {
        num--;
        anser.clear(); //初期化
        cin >> str; //文字列の代入
        for(int i=1; i<(int)str.size(); i++){
            std::string a = str.substr(0,i);
            std::string b = str.substr(i);
            std::string c = a;
            std::string d = b;
            std::reverse(c.begin(), c.end());
            std::reverse(d.begin(), d.end());
            std::string t[4] = {a, c, b, d};
            for(int j=0; j<2; j++){
                for(int k=2; k<4; k++){
                    anser.insert(t[j] + t[k]);
                    anser.insert(t[k] + t[j]);
                }
            }
        }
        std:: cout<<anser.size()<<endl;
    }
}

