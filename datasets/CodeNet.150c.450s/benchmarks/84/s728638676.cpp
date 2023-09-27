#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

#define MAX 200000

typedef long long ll;

using namespace std;
int N;

//提出時には消す
#include <fstream>

ll merge_sort(vector<int> &data){
    int n = data.size();
    if(n <= 1){
        return 0;
    }

    ll count = 0;
    vector<int> left(data.begin(), data.begin() + n / 2);
    vector<int> right(data.begin() + n / 2, data.end());

    count += merge_sort(left);
    count += merge_sort(right);

    int data_i = 0, left_i = 0, right_i = 0;
    while (data_i < n)
    {
        if( left_i < left.size() && (right_i == right.size() || left[left_i] <= right[right_i]) ){
            data[data_i++] = left[left_i++];
        }else{
            count += n / 2 - left_i;
            data[data_i++] = right[right_i++];
        }
    }
    return count;    
}

int main()
{

    cin.tie(0);

    int n;
    cin >> N;
    vector<int> data;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        data.emplace_back(n);
    }

    ll count = merge_sort(data);
    cout << count << "\n";
    // for (int i = 0; i < N; i++)
    // {
    //     cout << sequence[i];
    // }

    return 0;
}
