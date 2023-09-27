#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int terms_count;
    int eval_length;
    
    cin >> terms_count >> eval_length;

    queue<int> score_que;

    int i = 0;
    for(;i < eval_length; i++){
        int s;
        cin >> s;
        score_que.push(s);
    }

    for(;i < terms_count; i++){
        int s;
        cin >> s;

        if(score_que.front() < s){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        score_que.pop();
        score_que.push(s);
    }

    return 0;
}