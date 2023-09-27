#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#define MAX 20
using namespace std;

int new_a(int a, int digit){ /*次の数字を計算*/
    int max,min;
    string a_s;
    ostringstream sout;

    sout << setfill('0') << setw(digit) << a;//
    a_s = sout.str();                        //int -> string　と　0埋め
    sort(a_s.begin(), a_s.end());//昇順ソート
     min = stoi(a_s);//string -> int
    
     
    reverse(a_s.begin(), a_s.end());//要素を反転（降順ソート）
    max = stoi(a_s);
  
    
    return max - min;

}
int main(void){

    int a; 
    int digit;
    int a_n[MAX];
    while(1){
        cin >> a >> digit;//入力    scanf("%d",&a); scanf("%d",&digit);
        if(a == 0 && digit == 0){//終了判定
            break;
        }
        
        
        int i=0;
        int not_equal = 1;
        while(not_equal){
            a_n[i] = a;
            a = new_a(a,digit);
            i++;
            for(int j=0; j<i; j++){
                if(a == a_n[j]){//今までの数字と比較
                    cout << j << ' ' << a << ' ' << i-j << endl;//出力  printf("%d %d %d\n",j,a,i-j);
                    not_equal =0;
                    break;

                }
            }
        }
    }

}
