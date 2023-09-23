#include <iostream>

int main() {

    for (;;) {

        int n;
        int m;
        int p;

        std::cin >> n;
        std::cin >> m;
        std::cin >> p;

        if (n == 0 && m == 0 && p == 0) {
            break;
        }

        int numberOfTickets = 0;
        int numberOfTicketsForWinner = 0;

        for (int i=1; i<=n; ++i) {

            int t;
            std::cin >> t;

            numberOfTickets += t;

            if (i == m) {
                numberOfTicketsForWinner = t;
            }
        }

        if (numberOfTicketsForWinner == 0) {
            std::cout << 0 << std::endl;
            continue;
        }

        const int pooled = 100 * numberOfTickets;
        const double haitou = (double) (100 - p) * pooled / 100;
        const int haitouPerTicket = haitou / numberOfTicketsForWinner;

        std::cout << haitouPerTicket << std::endl;

    }

}
