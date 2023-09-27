#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

int l;

inline int toInt(string str){
    istringstream iss(str);
    int tmp;
    iss >> tmp;
    return tmp;
}

inline string toString(int arg){
    char ret[l];
    int base = 1;
    string res;
    for(int i=0;i<l;i++){
        ret[i] = (arg%(base*10)) / base + '0';
        base *= 10;
    }

    for(int i=l-1;i>=0;i--){
        res += ret[i];
    }
    return res;
}

int main(){
    int a;

    while(cin >> a >> l){
        if((a|l) == 0) break;
        map<int,int> m;
        string tmp;
        int mini, maxi;
        int cnt = 0;
        m[a] = 0;
        
        while(1){
            tmp = toString(a);
            for(int i=0;i<l;i++){
                for(int j=i+1;j<l;j++){
                    if(tmp[i] > tmp[j]){
                        swap(tmp[i],tmp[j]);
                    }
                }
            }
            mini = toInt(tmp);
            for(int i=0;i<l;i++){
                for(int j=i+1;j<l;j++){
                    if(tmp[i] < tmp[j]){
                        swap(tmp[i],tmp[j]);
                    }
                }
            }
            maxi = toInt(tmp);

            a = maxi - mini;
            cnt++;
            if(m.find(a) != m.end()){
                break;
            }else{
                m[a] = cnt;
            }
        }
        cout << m[a] << " " << a << " " << cnt - m[a] << endl;
    }
}