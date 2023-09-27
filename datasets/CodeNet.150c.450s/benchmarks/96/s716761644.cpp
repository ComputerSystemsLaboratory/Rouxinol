#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=0; i<n; ++i){
        string str; cin >> str;
        int N = str.size();
        for(int i=0; i<N; ++i){
            if(str[i]=='1'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%5==1) cout << ".";
                else if(cnt%5==2) cout << ",";
                else if(cnt%5==3) cout << "!";
                else if(cnt%5==4) cout << "?";
                else if(cnt%5==0) cout << " ";
            }else if(str[i]=='2'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%3==1) cout << "a";
                else if(cnt%3==2) cout << "b";
                else if(cnt%3==0) cout << "c";
            }else if(str[i]=='3'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%3==1) cout << "d";
                else if(cnt%3==2) cout << "e";
                else if(cnt%3==0) cout << "f";
            }else if(str[i]=='4'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%3==1) cout << "g";
                else if(cnt%3==2) cout << "h";
                else if(cnt%3==0) cout << "i";
            }else if(str[i]=='5'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%3==1) cout << "j";
                else if(cnt%3==2) cout << "k";
                else if(cnt%3==0) cout << "l";
            }else if(str[i]=='6'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%3==1) cout << "m";
                else if(cnt%3==2) cout << "n";
                else if(cnt%3==0) cout << "o";
            }else if(str[i]=='7'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%4==1) cout << "p";
                else if(cnt%4==2) cout << "q";
                else if(cnt%4==3) cout << "r";
                else if(cnt%4==0) cout << "s";
            }else if(str[i]=='8'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%3==1) cout << "t";
                else if(cnt%3==2) cout << "u";
                else if(cnt%3==0) cout << "v";
            }else if(str[i]=='9'){
                int pos = i, cnt=0;
                while(str[pos]!='0'){
                    pos++; cnt++;
                }
                i = pos;
                if(cnt%4==1) cout << "w";
                else if(cnt%4==2) cout << "x";
                else if(cnt%4==3) cout << "y";
                else if(cnt%4==0) cout << "z";
            }
        }
        cout << endl;
    }    
    return 0;
}
