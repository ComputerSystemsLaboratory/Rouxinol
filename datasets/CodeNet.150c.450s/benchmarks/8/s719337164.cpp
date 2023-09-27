#include<iostream>
#include<string>
using namespace std;
int main(){
    int t = 0; //太郎の得点
    int h = 0; //花子の得点
    int n;
    string str1, str2;
    cin >>n;
    for(int i = 0; i<n; i++){
        cin >>str1 >>str2;
        if(str1 == str2){
            t += 1;
            h += 1;
        }else if(str1 > str2){
            t += 3;
        }else if(str1 < str2){
            h += 3;
        }
        
    }cout <<t <<" " <<h <<endl;
    return 0;
}
