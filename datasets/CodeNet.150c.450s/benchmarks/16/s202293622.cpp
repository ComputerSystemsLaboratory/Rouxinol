#include<iostream>
using namespace std;

class stack
{
    int S[10001], top;
    int MAX;
public:
    stack();
    void initialize(){ top = 0; }
    bool isFull(){ return top >= MAX - 1; }
    bool isEmpty(){ return top == 0; }
    void push(int x){ if(isFull()){ return; } top++; S[top] = x; }
    int pop(){ if(isEmpty()){ return -1; } top--; return S[top + 1]; }
    int front(){ return S[top]; }
    int get_top(){ return top; }
    void docking(){ if(top < 2){ return; } S[top - 1] = S[top - 1] + S[top]; top--; }
    void show();
};

stack::stack() : MAX(10001){}

void stack::show()
{
    if(isEmpty()){ cout << endl; return; }
    for(int i = 1; i <= top; i++) cout << " " << S[i];
    cout << endl;
}

int main()
{
    char data[20000], ch;
    stack stk1, ponds, stk2;
    int i = 0, left, Area = 0;

    stk1.initialize();
    ponds.initialize();
    stk2.initialize();

    cin >> data;

    while(data[i]){
        ch = data[i];
        if(ch == '\\'){
            stk1.push(i);
            stk2.push(i);
        }else if(ch == '/'){
            if(stk1.isEmpty()){ i++; continue; }
            left = stk1.pop();
            Area = Area + i - left;
            ponds.push(i - left);
            while(stk2.front() > left){
                stk2.pop();
                ponds.docking();
            };
        }else{}
        i++;
    };

    cout << Area << endl;
    cout << ponds.get_top();
    ponds.show();

    return 0;
}