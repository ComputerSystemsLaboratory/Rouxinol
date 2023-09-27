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
    void LF();
    void RF();
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

void DICE::RF(){
    int temp = front;
    front = left;
    left = back;
    back = right;
    right = temp;
}

void DICE::LF(){
    int temp = front;
    front = right;
    right = back;
    back = left;
    left = temp;
}


int main(){
    DICE d;
    cin>>d.top>>d.back>>d.right>>d.left>>d.front>>d.bottom;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int top,back;
        cin>>top>>back;
        if(d.top != top)
        {
            d.South();
            if(d.top != top)
            {
                d.South();
                if(d.top != top)
                {
                    d.South();
                    if(d.top != top)
                    {
                        d.South();
                        if(d.top != top)
                        {
                            d.East();
                            if(d.top != top)
                            {
                                d.East();
                                d.East();
                            }
                        }
                    }
                }
            }
        }

        if(d.back != back)
        {
            d.RF();
            if(d.back != back)
            {
                d.RF();
                if(d.back != back)
                {
                    d.RF();
                    if(d.back != back){
                        d.RF();
                    }
                }
            }
        }

        cout<<d.right<<endl;
    }

    return 0;
}