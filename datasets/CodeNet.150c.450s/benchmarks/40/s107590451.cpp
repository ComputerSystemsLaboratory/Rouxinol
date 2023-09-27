#include<iostream>
#include<string>

using namespace std;

class DICE{
public:
    int top;
    int bottom;
    int right;
    int left;
    int front;
    int back;
    void South();
    void North();
    void East();
    void West();
};

void DICE::South(){
    int temp = back;
    back = top;
    top = front;
    front = bottom;
    bottom = temp;
}

void DICE::North(){
    int temp = front;
    front = top;
    top = back;
    back = bottom;
    bottom = temp;
}

void DICE::West(){
    int temp = left;
    left = top;
    top = right;
    right = bottom;
    bottom = temp;
}

void DICE::East(){
    int temp = right;
    right = top;
    top = left;
    left = bottom;
    bottom = temp;
}

int main(){
    DICE d;
    cin>>d.top>>d.back>>d.right>>d.left>>d.front>>d.bottom;
    string str;
    cin>>str;
    for(int i = 0;i<str.size();i++){
        if(str[i]=='S')d.South();
        if(str[i]=='N')d.North();
        if(str[i]=='E')d.East();
        if(str[i]=='W')d.West();
    }
    cout<<d.top<<endl;
    return 0;
}