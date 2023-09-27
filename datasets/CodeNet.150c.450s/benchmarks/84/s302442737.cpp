#include <iostream>
#include <limits>
#include <vector>

long long cnt = 0;

void merge(std::vector<long long> &s, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    std::vector<long long> L(n1+1);
    std::vector<long long> R(n2+1);

    for (int i = 0; i < n1; i++) {
        L[i] = s[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = s[mid + i];
    }
    L[n1] = std::numeric_limits<int>::max();
    R[n2] = std::numeric_limits<int>::max();

    // std::cout << "==== merge ====" << std::endl;
    // for (int i = 0; i < n1; i++) {
    //     std::cout << L[i] << " ";
    // }
    // std::cout << std::endl;
    // for (int i = 0; i < n2; i++) {
    //     std::cout << R[i] << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "||" << std::endl;
    // std::cout << "\\/" << std::endl;


    int i = 0;
    int j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            s[k] = L[i];
            i++;
        }
        else {
            if (i != n1) cnt += n1 - i;
            s[k] = R[j];
            j++;
        }
    }

    // for (int i = left; i < right; i++) {
    //     std::cout << s[i] << " ";
    // }
    // std::cout << std::endl;
}

void mergesort(std::vector<long long> &s, int left, int right)
{
    if (left + 1 < right) {
        int mid = left + (right - left) / 2;
        mergesort(s, left, mid);
        mergesort(s, mid, right);
        merge(s, left, mid, right);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<long long> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    mergesort(s, 0, n);
    std::cout << cnt << std::endl;

    return 0;
}