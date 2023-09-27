#include <iostream>
#include <stack>

using namespace std;

int caseCnt, numbers[10], curNum;
stack<int> Left, Right;

bool used[10], result;

void clear_stack(){
    while( !Left.empty())  Left.pop();
    while(!Right.empty()) Right.pop();
}

bool dfs(int index, int left_or_right){
    if(!left_or_right){
        if(Left.empty() || numbers[index] > Left.top())
            Left.push(numbers[index]);
        else
            return false;
    }else{
        if(Right.empty() || numbers[index] > Right.top())
            Right.push(numbers[index]);
        else
            return false;
    }
    if(index == 9)return true;
    else if(dfs(index+1, 0))return true;
    else if(dfs(index+1, 1)) return true;
    else return false;
}

int main(){
    cin >> caseCnt;

    while(caseCnt--){
        result = false;
        clear_stack();

        for(int i=0; i<10; ++i) cin >> numbers[i];

        result = dfs(0, 0);
        if(result){
            cout << "YES\n";
            continue;
        }

        result = dfs(0, 1);
        if(result) cout << "YES\n";
        else       cout << "NO\n";
    }
    return 0;
}

