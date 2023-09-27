//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C&lang=jp
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    std::set<string> dic;

    int count;
    cin >> count;

    for(int i=0; i<count; i++){
        string buf1, buf2;
        cin >> buf1 >> buf2;
        if(buf1 == "insert"){
            dic.insert(buf2);
          }
        else{
          if(dic.count(buf2) > 0) printf("yes\n");
          else printf("no\n");
        }
    }
    return 0;
}