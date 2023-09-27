#include <iostream>
using namespace std;

int selection_sort(int * nums, int N){
    int swaps = 0;
    for (int i=0; i != N; ++i){
        int mini = i;
        for (int j=i; j!=N; ++j){
            if (nums[j] < nums[mini]) mini = j;
        }
        if (i!=mini){
            int tmp = nums[i];
            nums[i] = nums[mini];
            nums[mini] = tmp;
            ++swaps;            
        }
    }
    return swaps;
}



int main()
{
    int N = 0;
    cin >> N;
    int *nums = new int[N];
    for (auto i=0; i!=N; ++i) cin >> nums[i];
    int swaps = selection_sort(nums, N);
    for (auto i=0; i!=N-1; ++i) cout << nums[i] << ' ';
    cout << nums[N-1] << endl;
    cout << swaps << endl;
    return 0;
}