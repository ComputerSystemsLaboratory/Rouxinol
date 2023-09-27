#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define MAX 200000

template<typename T>
class Stack
{
private:
    int index;
    T a[MAX];
public:
    Stack() { index = 0; }
    T pop(void) { return a[--index]; }
    void push(T t) { a[index++] = t; }
    bool isEmpty(void) { return (index == 0); }
    T top(void) { return a[index-1]; }
    void initial(void) { index = 0; }
};

enum LandType {
    NONE,
    FLAT,
    SLOPE,
    BACKSLOPE,
    WATER,
};

class LandScape {
public:
    LandType type;
    int len;
    int area; // 水のある領域面積
    LandScape() { this->type = NONE; this->len = 0; this->area = 0; }
    LandScape(LandType type) {
        this->type = type;
        this->len = 0;
        this->area = 0;
    }
    LandScape(LandType type, int len, int area) {
        this->type = type;
        this->len = len;
        this->area = area;
    }
    LandScape operator+ (const LandScape l) {
        // typeはとりあえず左の項のものに合わせる
        return LandScape(this->type, this->len + l.len, this->area + l.area);
    }
    LandScape& operator+= (const LandScape& l) {
        // typeはとりあえず元の項のものに合わせる
        this->len += l.len;
        this->area += l.area;
        return *this;
    }
};

int main(int, char**)
{
    Stack<LandScape> stack;
    int slope_count = 0;

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case '\\':
                stack.push(LandScape(SLOPE));
                slope_count++;
                break;
            case '_' :
                if ((stack.top()).type != FLAT) {
                    stack.push(LandScape(FLAT, 1, 0));
                } else {
                    stack.push(stack.pop() + LandScape(FLAT, 1, 0));                    
                }
                break;
            case '/' :
                if (slope_count == 0) { stack.push(BACKSLOPE); continue; }  // 左端か丘の上
                {
                    LandScape tmp = LandScape(WATER);
                    while (stack.top().type != SLOPE) {
                        tmp += stack.pop();
                    }
                    tmp += LandScape(WATER, 2, tmp.len + 1);
                    stack.pop();
                    stack.push(tmp);
                    slope_count--;
                }
                break;
            default : break;
        }
    }

    int l[MAX];
    int count = 0;
    int sum = 0;
    while (!stack.isEmpty()) {
        LandScape tmp = stack.pop();
        if (tmp.type == WATER) {
            sum += tmp.area;
            l[count++] = tmp.area;
        }
    }

    cout << sum << endl;
    cout << count;
    for (int i = count - 1; i >= 0; i--) cout << " " << l[i];
    cout << endl;

    return 0;
}
