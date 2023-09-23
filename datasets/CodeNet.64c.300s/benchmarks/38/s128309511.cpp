#include <iostream>

using namespace std;

int caseCnt, numbers[10], curNum;
bool used[10], result;

int main(){
    cin >> caseCnt;

    while(caseCnt--){
        result = true;

        for(int i=0; i<10; ++i){
            cin >> numbers[i];
            used[i] = false;
        }
        curNum = numbers[0];
        used[0] = true;
        for(int i=1; i<10; ++i){
            if(numbers[i] > curNum){
                curNum = numbers[i];
                used[i] = true;
                //cout << "fk\n";
            }
        }

        bool first_not_used = true;
        for(int i=1; i<10; ++i){
            if(used[i] == false){
                if(first_not_used){
                    first_not_used = false;
                    curNum = numbers[i];
                    //cout << "curNum : " << curNum << endl;
                }else{
                    if(numbers[i] > curNum){
                        curNum = numbers[i];
                    }else{
                        result = false;
                        break;
                    }
                }
            }
        }
        if(result) cout << "YES\n";
        else       cout << "NO\n";
    }
    return 0;
}

