#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

#define UP   '/'
#define DOWN '\\'
#define FLAT '_'
#define END  20001

int calc_area(int i, int j, const string* input)
{
    int area = 0, d = 0;
    while (i < j) {
	if ((*input)[i] == UP)
	    area += d--;
	else if ((*input)[i] == DOWN)
	    area += d++;
	else
	    area += d;
	i++;
    }
    return area;
}

int main(void)
{
    vector<int> areas, heights;
    string input;
    cin >> input;

    int h= 0;
    heights.push_back(0);
    for (auto x: input) {
	if (x == DOWN)
	    h--;
	else if (x == UP)
	    h++;
	heights.push_back(h);
    }
    heights.push_back(END);

    int i = 0, k = 0, total = 0;
    while (heights[i] != END) {
	int j = i + 1;
	while (heights[j] != END && heights[j] < heights[i])
	    j++;
	if (heights[i] == heights[j]) {
	    int area = calc_area(i, j, &input);
	    if (area > 0) {
		total += area;
		areas.push_back(area);
		k++;
	    }
	    i = j;
	} else
	    i++;
    }

    printf("%d\n%d", total, k);
    if (k > 0)
	for (int i = 0; i < k; i++)
	    printf(" %d", areas[i]);
    puts("");
    
    return 0;
}