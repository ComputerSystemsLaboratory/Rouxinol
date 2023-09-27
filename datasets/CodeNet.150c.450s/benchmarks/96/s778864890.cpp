#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n,m,a[10] = {0,0,0,0,0,0,0,0,0,0};
    string s,t;
    string s1(".,!? ");
    string s2("abc");
    string s3("def");
    string s4("ghi");
    string s5("jkl");
    string s6("mno");
    string s7("pqrs");
    string s8("tuv");
    string s9("wxyz");
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> s;
        for(int j = 0;j < s.size();j++){
            if(s[j] == '0' && a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9] == 0)continue;
            else if(s[j] == '1'){
                t = s1;
                m = 1;
                a[1]++;
            }else if(s[j] == '2'){
                t = s2;
                m = 2;
                a[2]++;
            }else if(s[j] == '3'){
                t = s3;
                m = 3;
                a[3]++;
            }else if(s[j] == '4'){
                t = s4;
                m = 4;
                a[4]++;
            }else if(s[j] == '5'){
                t = s5;
                m = 5;
                a[5]++;
            }else if(s[j] == '6'){
                t = s6;
                m = 6;
                a[6]++;
            }else if(s[j] == '7'){
                t = s7;
                m = 7;
                a[7]++;
            }else if(s[j] == '8'){
                t = s8;
                m = 8;
                a[8]++;
            }else if(s[j] == '9'){
                t = s9;
                m = 9;
                a[9]++;
            }
            else if(s[j] == '0' && a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9] != 0){
                if(m == 1){
                    cout << t[(a[m]-1)%5];
                    a[m] = 0;
                }
                else if(m == 7 || m == 9){
                    cout << t[(a[m]-1)%4];
                    a[m] = 0;
                }
                else{
                    cout << t[(a[m]-1)%3];
                    a[m] = 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}