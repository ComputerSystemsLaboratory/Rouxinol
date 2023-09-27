#include <iostream>
#include <string>
using namespace std;
 
string low(string w){
    string w_ = "";
    for(int i=0;i<w.size();i++){
        if(w[i] >= 'A' && w[i] <= 'Z'){
            w_ += w[i]+32;
        }else{
            w_ += w[i];
        }
    }
    return w_;
}

int main(){
    string w; cin >> w;
    w = low(w);

    string t;
    int cnt=0;
    
    string tango = "";

    while(true){
        cin >> t;
        if(t=="END_OF_TEXT") break;
        t = low(t);
        if(t == w) cnt++;
    }

    cout << cnt<< endl;
    return 0;
}
