#include <cstdio>
#include <vector>

int main()
{
    int input_size;
    scanf("%d", &input_size);
    std::vector<std::vector<bool> > neighbor_exists(input_size, std::vector<bool>(input_size, false));
    for(int i = 0; i < neighbor_exists.size(); i++) {
        int id, num_neighbors;
        scanf("%d %d", &id, &num_neighbors);
        for(int j = 0; j < num_neighbors; j++) {
            int neighbor_id;
            scanf("%d", &neighbor_id);
            neighbor_exists[id-1][neighbor_id-1] = true;
        }
    }

    for(int i = 0; i < neighbor_exists.size(); i++) {
        if(neighbor_exists[i][0]) {
            putchar('1');
        } else {
            putchar('0');
        }
        for(int j = 1; j < neighbor_exists[i].size(); j++) {
            putchar(' ');
            if(neighbor_exists[i][j]) {
                putchar('1');
            } else {
                putchar('0');
            }
        }
        putchar('\n');
    }
    return 0;
}