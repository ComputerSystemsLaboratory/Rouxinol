#include <iostream>
#include <vector>

bool solve(int i, std::vector<int> &A, int m)
{
    // exhaustive research
    int n = A.size();
    if (m == 0) return true;
    else if (i >= n) return false;
    else return solve(i+1, A, m) || solve(i+1, A, m - A[i]);
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> A(n);
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    int q;
    std::cin >> q;
    int m;
    for (int i = 0; i < q; i++) {
        std::cin >> m;
        if (solve(0, A, m))
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
    }

    return 0;
}