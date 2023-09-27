#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
	int h[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &h[i]);
		//printf("%d\n", h[i]);
	}

	sort(h, h + 10, std::greater<int>());
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", h[i]);
	}
	
}