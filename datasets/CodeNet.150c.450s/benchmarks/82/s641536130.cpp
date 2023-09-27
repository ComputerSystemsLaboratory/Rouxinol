
#include <iostream>

using namespace std;



int main()
{

    int d_map[6][6] = { { -1, 2, 4, 1, 3,-1 },
                        {  3,-1, 0, 5,-1, 2 },
                        {  1, 5,-1,-1, 0, 4 },
                        {  4, 0,-1,-1, 5, 1 },
                        {  2,-1, 5, 0,-1, 3 },
                        { -1, 3, 1, 4, 2,-1} };

    int nums[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> nums[i];
    }

    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int top, front;
        cin >> top >> front;

        int top_index;
        for(top_index = 0; top_index < 6; top_index++)
        {
            if(nums[top_index] == top){ break; }
        }
        int front_index;
        for(front_index = 0; front_index < 6; front_index++)
        {
            if(nums[front_index] == front){ break; }
        }
        cout << nums[d_map[top_index][front_index]] << endl;

    }
    return 0;
}