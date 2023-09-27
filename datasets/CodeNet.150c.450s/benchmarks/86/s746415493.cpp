#include <iostream>
#include <cstdlib>
#include <vector>

struct Game {
    int M;
    int N;
    int P;
    std::vector<int> betNum;
};

void cost(Game game); 

int main(void) {
    int M;
    int N;
    int P;
    do {
        Game game;
        std::cin >> game.M >> game.N >> game.P;

        if (game.M == 0 && game.N == 0 && game.P == 0) {
            break;
        }

        for (int i = 0; i < game.M; i++) {
            int num;
            std::cin >> num;
            game.betNum.push_back(num); 
        }
        cost(game);

    } while (1);
    return EXIT_SUCCESS;
}

void cost(Game game) {
    int total = 0;
    std::vector<int> v = game.betNum;
    for (int i = 0; i < (int)(v.size()); i ++) {
        total += v[i]; 
    }
    int winner = v[game.N - 1];
    if (winner == 0) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << 100 * total * (100 - game.P) / 100 / winner << std::endl;
    }
    return;
}