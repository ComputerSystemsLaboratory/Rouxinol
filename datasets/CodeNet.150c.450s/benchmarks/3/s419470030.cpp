#include <iostream>
#include <string>

using namespace std;

void process_command(istream &istr, string &str);
void my_print(const string &str, int a, int b);
void my_reverse(string &str, int a, int b);
void my_replace(string &str, int a, int b, string &p);


int main(){
    string str;
    cin >> str;
    int q;
    cin >> q;
    for(int i = 0; i != q; ++i){
        process_command(cin, str);
    }
}

void process_command(istream &istr, string &str){
    string command;
    istr >> command;
    if (command == "print"){
        int a, b;
        istr >> a >> b;
        my_print(str, a, b);
    }else if (command == "reverse"){
        int a, b;
        istr >> a >> b;
        my_reverse(str, a, b);
    }else if (command == "replace"){
        int a, b;
        string p;
        istr >> a >> b >> p;
        my_replace(str, a, b, p);
    }else {
        cout << "Unexpected command encountered! " << command << endl;
    }

}
void my_print(const string &str, int a, int b){
    cout << str.substr(a, b - a + 1) << endl;
}

void my_reverse(string &str, int a, int b){
    while(a < b){
        auto tmp = str[a];
        str[a] = str[b];
        str[b] = tmp;
        ++a;
        --b;
    }
}

void my_replace(string &str, int a, int b, string &p){
    str.replace(a, b - a + 1, p);
}