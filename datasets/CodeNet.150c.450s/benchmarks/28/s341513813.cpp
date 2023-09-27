#include <cstdio>
#include <vector>


// function that checks if given a weight limit, the number of allocations does
// not exceed the number of available trucks
bool fits(int limit, int n_weights, int n_trucks, std::vector<int> &weights) {
    for (int i = 0; i < n_weights; ++i, --n_trucks) { // for each allocation
        int cur_truck_weight = 0;
        if (weights[i] > limit) return false; // if single weight cannot fit into limit
        while (i < n_weights && cur_truck_weight + weights[i] <= limit) {
            cur_truck_weight += weights[i];
            ++i;
        }
        --i;
    }
    return (n_trucks >= 0); // return false if allocations exceed number of trucks
}

int main()
{
    int n_weights, n_trucks;
    scanf("%d %d", &n_weights, &n_trucks);
    std::vector <int> weights;
    for (int i = 0; i < n_weights; ++i) {
        int weight;
        scanf("%d", &weight);
        weights.push_back(weight);
    }
    
    // binary search
    int left = 0, right = 1e9;
    while (left < right) {
        int mid = (left + right) / 2;
        if (fits(mid, n_weights, n_trucks, weights)) {
            right = mid; // set upper bound
        } else {
            left = mid + 1; // set lower bound
        }
    }
    printf("%d\n", left);
}