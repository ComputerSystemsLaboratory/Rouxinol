#include<iostream>
#include<string>

using namespace std;

string replaceAll(string &replacedStr, string from, string to){
    unsigned int pos = replacedStr.find(from);
    int toLen = to.length();

    if(from.empty()){
        return replacedStr;
    }

    while((replacedStr.find(from,pos)) != string::npos){
        pos = replacedStr.find(from,pos);
        replacedStr.replace(pos,from.length(),to);
        pos += toLen;
    }
    return replacedStr;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        for(int k=0;k<10;k++){
            replaceAll(a,"111111","1");
            replaceAll(a,"2222","2");
            replaceAll(a,"3333","3");
            replaceAll(a,"4444","4");
            replaceAll(a,"5555","5");
            replaceAll(a,"6666","6");
            replaceAll(a,"77777","7");
            replaceAll(a,"8888","8");
            replaceAll(a,"99999","9");
        }
        replaceAll(a,"111110"," ");
        replaceAll(a,"11110","?");
        replaceAll(a,"1110","!");
        replaceAll(a,"110",",");
        replaceAll(a,"10",".");
        replaceAll(a,"2220","c");
        replaceAll(a,"220","b");
        replaceAll(a,"20","a");
        replaceAll(a,"3330","f");
        replaceAll(a,"330","e");
        replaceAll(a,"30","d");
        replaceAll(a,"4440","i");
        replaceAll(a,"440","h");
        replaceAll(a,"40","g");
        replaceAll(a,"5550","l");
        replaceAll(a,"550","k");
        replaceAll(a,"50","j");
        replaceAll(a,"6660","o");
        replaceAll(a,"660","n");
        replaceAll(a,"60","m");
        replaceAll(a,"77770","s");
        replaceAll(a,"7770","r");
        replaceAll(a,"770","q");
        replaceAll(a,"70","p");
        replaceAll(a,"8880","v");
        replaceAll(a,"880","u");
        replaceAll(a,"80","t");
        replaceAll(a,"99990","z");
        replaceAll(a,"9990","y");
        replaceAll(a,"990","x");
        replaceAll(a,"90","w");
        replaceAll(a,"0","");
        cout << a << endl;
    }
}
