#include <iostream>
using namespace std;

int bubble_sort(int * nums, int N){
    int swaps = 0;
    for (int i=0; i != N; ++i){
        for (int j=N-1; j!=i; --j){
            if (nums[j] < nums[j-1]){
                int tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp;
                ++swaps;
            }
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
    int swaps = bubble_sort(nums, N);
    for (auto i=0; i!=N-1; ++i) cout << nums[i] << ' ';
    cout << nums[N-1] << endl;
    cout << swaps << endl;
//    for (auto &num : nums) cin >> num;
//    for (auto const & num : nums) cout << num << endl;
    return 0;
}