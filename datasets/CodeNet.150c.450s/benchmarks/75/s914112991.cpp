#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#define ll long long
#define loop(x, start, end) for(int x = start; x < end; x++)
#define loopdown(x, start, end) for(int x = start; x > end; x--)

#define left(x) (x * 2)
#define right(x) (x * 2 + 1)
#define max3(x, y, z) (max(x, max(y, z)))

void heapify(vector<int> &vec, int index) {
    int l = left(index);
    int r = right(index);
    
    int largest;
    if (l < vec.size() && vec[l] > vec[index]) largest = l;
    else largest = index;
    if (r < vec.size() && vec[r] > vec[largest]) largest = r;
    
    bool childLarger = largest != index;
    if (childLarger) {
        swap(vec[largest], vec[index]);
        heapify(vec, largest);
    }
}

int main(void){
    int n, x;
    cin >> n;
    vector<int> vec(n+1);
    
    loop(i, 1, n+1) cin >> vec[i];
    
    loopdown(i, vec.size() / 2, 0) heapify(vec, i);
    
    loop(i, 1, n+1) cout << " " << vec[i];
    cout << endl;
    return 0;
}

