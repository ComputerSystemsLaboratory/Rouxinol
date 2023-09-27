#include<iostream>
#include<cctype>
#include <algorithm>
#include<string>
using namespace std;
int main(){
        string p;
        string in;
        string s[10000] ={""};
        getline(cin, p);
        int n = 0;
        int k = 0;
        int q = 0;
        bool j = true;
        while(1){
                getline(cin,in);
                for(int i = 0; i < in.length(); i++){
                        if(in[i] ==32){
                                k++;
                        }else{
                                s[k] += in[i];
                        }
                }
                for(;q <= k; q++){
                        if(s[q] =="END_OF_TEXT"){
                                j = false;
                        }
                        string l = s[q];
                     transform(l.begin(), l.end(), l.begin(), ::tolower);
                         if(l == p){
                                n++;
                        }
                }
                k++;
                if(j == false)break;
        }
            cout << n << endl;
}
