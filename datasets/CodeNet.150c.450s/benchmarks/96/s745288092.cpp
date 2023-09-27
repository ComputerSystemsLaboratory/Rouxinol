#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int n;
    cin >> n;
    for(int x=0;x<n;x++){
        cin >> str;
        int times = 0;
        char kind = 0;
        string ret = "";
        str += '0';
        for(int i=0;i<str.size();i++){
            if(str[i] == '0'){
                if(times != 0){
                    times--;
                    if(kind == '1'){
                        times %= 5;
                        if(times == 0){
                            ret += '.';
                        }else if(times == 1){
                            ret += ',';
                        }else if(times == 2){
                            ret += '!';
                        }else if(times == 3){
                            ret += '?';
                        }else{
                            ret += ' ';
                        }
                    }else if(kind == '2'){
                        ret += 'a' + (times%3);
                    }else if(kind == '3'){
                        ret += 'd' + (times%3);
                    }else if(kind == '4'){
                        ret += 'g' + (times%3);
                    }else if(kind == '5'){
                        ret += 'j' + (times%3);
                    }else if(kind == '6'){
                        ret += 'm' + (times%3);
                    }else if(kind == '7'){
                        ret += 'p' + (times%4);
                    }else if(kind == '8'){
                        ret += 't' + (times%3);
                    }else if(kind == '9'){
                        ret += 'w' + (times%4);
                    }
                }
                times = 0;
            }else{
                times++;
                kind = str[i];
            }
        }
        cout << ret << endl;
    }
}