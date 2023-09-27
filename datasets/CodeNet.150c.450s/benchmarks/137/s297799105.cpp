#include <iostream>
#include <string>

using namespace std;
int mod = 1046527;

int genhash(string str){
    int h = 0;

    for(auto ch : str){
        h *= 5;
        if(ch == 'A'){
            h += 1;
        } else if(ch == 'C'){
            h += 2;
        } else if(ch == 'G'){
            h += 3;
        } else {
            h += 4;
        }
    }
    return h;
}

void insert_dict(int* dict, string str){
    int h = genhash(str);
    int h1 = h%mod;
    int h2 = 1+(h%(mod-1));
    int i = 0;
    while(dict[(h1+h2*i)%mod]){
        if(dict[(h1+h2*i)%mod] == h){
            break;
        }
        ++i;
    };
    dict[(h1+h2*i)%mod] = h;
}

bool find_dict(int* dict, string str){
    int h = genhash(str);
    int h1 = h%mod;
    int h2 = 1+(h%(mod-1));
    int i = 0;
    while(dict[(h1+h2*i)%mod]){
        if(dict[(h1+h2*i)%mod] == h){
            return true;
        }
        ++i;
    }
    return false;
}
int main(){
    cin.sync_with_stdio(false);
    int dict[mod];
    char command[10];
    string str {};
    int n;
    cin >> n;
    while(n--){
        cin >> command >> str;
        if(command[0] == 'i'){
            insert_dict(dict, str);
        } else {
            cout << (find_dict(dict, str) ? "yes" : "no") << "\n";
        }
    }
}