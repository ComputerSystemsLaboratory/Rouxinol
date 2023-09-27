#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    char s;
    int h = 0;
    int pod = 0;
    vector<int> downs;
    vector< pair<int, int> > pods;
    int i = 0;
    int sum = 0;
    while (scanf("%c", &s) != EOF && s != '\n') {
        if (s == '\\') {
            downs.push_back(i);
        }
        else if (s == '/' && 0 < downs.size()) {
            int pod_opposite = downs.back(); downs.pop_back();
            int area = i - pod_opposite;
            sum += area;
            while (0 < pods.size() && pod_opposite < pods.back().first) {
                area += pods.back().second; pods.pop_back();
            }
            pods.push_back(make_pair(pod_opposite, area));
        }
        i++;
    }

    printf("%d\n%lu", sum, pods.size());
    for (int i=0; i<pods.size(); i++) {
        printf(" %d", pods[i].second);
    }
    printf("\n");
    return 0;
}