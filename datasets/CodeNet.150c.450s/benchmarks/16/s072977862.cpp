#include <cstdio>
#include <cstring>

#include <algorithm>

#define MAX_LEN 20000

char buffer[MAX_LEN + 1];
int heights[MAX_LEN + 1];

int from_left[MAX_LEN + 1];
int from_right[MAX_LEN + 1];

int water_count = 0;
int waters[MAX_LEN + 1];

int get_diff(int pos){
	return (buffer[pos] == '/' ? 1 : buffer[pos] == '_' ? 0 : -1);
}

void bottom_up(int* array, int len){
	int array_min = 0;
	
	for(int pos = 0; pos < len; pos++){
		array_min = std::min(array_min, array[pos]); 
	}
	for(int pos = 0; pos < len; pos++){
		array[pos] -= array_min;
	}
}

int main(int argc, char* argv[]){
	std::scanf("%s", buffer);
	const int len = std::strlen(buffer);
	
	for(int pos = 0; pos < len; pos++){
		heights[pos + 1] += heights[pos] + get_diff(pos);
	}
	
	bottom_up(heights,  len + 1);
	for(int i = 0; i <= len; i++){
		from_left[i] = std::max((i == 0 ? 0 : from_left[i - 1]), heights[i]);
	}
	for(int i = len; i >= 0; i--){
		from_right[i] = std::max((i == len ? 0 : from_right[i + 1]), heights[i]);
	}

	int sum = 0;
	
	for(int i = 1, prev_height = 0; i <= len; i++){
		const int h = std::min(from_left[i], from_right[i]) - heights[i];
		if(h > 0){ waters[water_count] += h; sum += h; }

		if(prev_height != 0 && h == 0){
			water_count++;
		}

		prev_height = h;
		
		//std::printf("%d", std::min(from_left[i], from_right[i]) - heights[i]);
	}

	std::printf("%d\n", sum);
	std::printf("%d", water_count);
	for(int i = 0; i < water_count; i++){
		std::printf(" %d", waters[i]);
	}
	std::printf("\n");

	return 0;
}