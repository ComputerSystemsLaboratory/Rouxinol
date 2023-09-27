#include<iostream>
#include<set>

using namespace std;

int hoge(char c){

    if(c=='m') return 1000;
    if(c=='c') return 100;
    if(c=='x') return 10;
    if(c=='i') return 1;
}

char geho(int k){

    if(k==1000) return 'm';
    if(k==100) return 'c';
    if(k==10) return 'x';
    if(k==1) return 'i';
}

int mcxi(string s){

    int ret=0;
    int num=1;
    for(int i=0; i<s.size(); i++){
        if('a'<=s[i]&&s[i]<='z'){
            ret+=num*hoge(s[i]);
            num=1;
        }else{
            num=s[i]-'0';
        }
    }

    return ret;
}

string rev(int k){

    string ret;
    for(int i=1000; i>=1; i/=10){
        int m=(k/i)%10;
        if(m){
            if(m==1){

            }else{
                ret+=m+'0';
            }
            ret+=geho(i);
        }
    }
    return ret;
}

int main(){

    int n;
    cin>> n;
    string s[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>> s[i][j];
        }
    }

    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<2; j++){
            sum+=mcxi(s[i][j]);
        }
        cout<< rev(sum)<< endl;
    }

    return 0;
}