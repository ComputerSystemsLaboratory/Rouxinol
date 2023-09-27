#include<iostream>
#include<string>
using namespace std;
int main(){
    string W,T;
    int count = 0;
    cin >> W;
    while(cin >> T){
        if (T == "END_OF_TEXT") break;
        else{
            for (int i = 0; i < T.size(); i++){
                T[i] = tolower(T[i]); 
            }
            if(T == W) count++;
        }
         
    }
    cout << count << endl;
    return 0;
}
