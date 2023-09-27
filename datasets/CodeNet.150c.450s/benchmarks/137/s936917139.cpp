/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C&lang=jp*/

#include <iostream>
#include <cmath>

#define MAX 1000000

#define hash(key,p)   ((key)%(p))
#define hash_a(key)   hash(key,MAX)
#define hash_b(key)   (hash(key,MAX-1)+1)
#define myhash(key, n) hash_a(hash_a(key)+(n)*hash_b(key))

using namespace std;

string s[MAX];

int getKey(string value){
    int key = 0;
    for(int i=0;i<value.length();i++){
        switch (value[i]) {
            case 'A':
                key += pow(5,i)*1;
                break;
            case 'C':
                key += pow(5,i)*2;
                break;
            case 'G':
                key += pow(5,i)*3;
                break;
            case 'T':
                key += pow(5,i)*4;
                break;
        }
    }
    return key;
}

bool insert(string value){
    int key = getKey(value);
    for (int j = 0; j<MAX; j++) {
        int h= myhash(key,j);
        if(s[h]==""){
            s[h]=value;
            return true;
        }else if(s[h]==value){
            return false;
        }
    }
}

bool search(string value){
    int key = getKey(value);
    for (int j = 0; true; j++) {
        int h= myhash(key,j);
        if(j>MAX+1 || s[h]==""){
            return false;
        }else if(s[h]==value){
            return true;
        }
    }
}

int main(){
    int n;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for (int i = 0; i < n; i++) {
        string ins;
        string value;
        cin >> ins >> value;
        if(ins=="insert"){
            insert(value);
        }else if(search(value)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}