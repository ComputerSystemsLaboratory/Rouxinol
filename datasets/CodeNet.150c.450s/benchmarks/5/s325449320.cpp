#include <iostream>
#include <vector>

void reverse(std::vector<int> &_in)
{
    for(int i = 0; i < _in.size() / 2; i++) {
        int tmp = _in[i];
        _in[i] = _in[_in.size() - i - 1];
        _in[_in.size() - i - 1] = tmp;
    }
}

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
	std::cin >> nums[i];
    }
    reverse(nums);
    for(int i = 0; i < n; i++) {
	std::cout << nums[i];
	if(i != n - 1) { std::cout << " ";}
    }
    std::cout << std::endl;
    return 0;
}