#include <iostream>
#include <string>
#include <stack>
#include<algorithm>
#include <vector>

using namespace std;

typedef struct _Areas
{
    int left;
    int area;
} Areas;


int main(){
    string input;
    stack<int> s1;
    stack<Areas> s2;
    int sum = 0;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if(input[i] == '\\'){
            s1.push(i);
        } else if(input[i] == '/' && !s1.empty())
        {
            int j = s1.top(); s1.pop();
            int area = i - j;
            sum += area;
            int tmp_sum = area;

            while (!s2.empty() && s2.top().left > j){
                tmp_sum += s2.top().area;
                s2.pop();
            } 
            Areas areas = {j, tmp_sum};
            s2.push(areas);
        }
    }

    vector<int> answer;
    while(s2.size() > 0){
        answer.push_back(s2.top().area); 
        s2.pop();
    }
    reverse(answer.begin(), answer.end());

    cout << sum << endl;
    cout << answer.size();
    for(int i = 0; i < answer.size(); i++){
        cout << " " << answer[i];
    }
    cout << endl;
    
    return 0;
}
