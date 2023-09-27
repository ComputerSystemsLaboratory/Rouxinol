#include <stdio.h>
#include <vector>
#include <list>
#include <array>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stdexcept>


using std::string;
using std::vector;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// util
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

std::vector<std::string> split(const std::string& input, char delimiter)
{
    std::istringstream stream(input);

    std::string field;
    std::vector<std::string> result;
    while (std::getline(stream, field, delimiter)) {
        result.push_back(field);
    }
    return result;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// user func
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void printList(const vector<int>& list) {
    // print
    for(int i = 0; i < list.size(); i++){
        printf("%d", list[i]);
        if(i != list.size() -1){
            printf(" ");
        }
    }
    printf("\n");
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// logic
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
static unsigned long count = 0;
void merge(vector<int>& list, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1 + 1);
    vector<int> R(n2 + 1);
    for(int i = 0; i < n1; i++){
        L[i] = list[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = list[mid + i];
    }
    L[n1] = std::numeric_limits<int>::max();
    R[n2] = std::numeric_limits<int>::max();

    int i = 0;
    int j = 0;
    for(int k = left; k < right; k++){

        if(L[i] <= R[j]){
            list[k] = L[i];
            i++;
        }else{
            count += n1 - i;
            list[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<int>& list, int left, int right){
    // printf("left:%d right:%d\n", left, right);
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(list, left, mid);
        mergeSort(list, mid, right);
        merge(list, left, mid, right);
    }
}

void solve() {
    int n;
    scanf("%d", &n);

    vector<int> list(n);
    for(int i = 0; i < n; i++){
        int v;
        scanf("%d", &v);
        list[i] = v;
    }
    mergeSort(list, 0, n );
    printf("%zu\n", count);
    // printList(list);
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// main
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    solve();
    return 0;
}
