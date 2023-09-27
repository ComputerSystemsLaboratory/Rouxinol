#include <iostream>

int tetrahedral_number (int n)
{
    return (n * (n + 1) * (n + 2)) / 6;
}


const int MAX_NUM = 1000000;

int* solve_regular_problem ()
{
    int* solutions = new int[MAX_NUM + 1];

    std::fill (solutions, solutions + MAX_NUM + 1, MAX_NUM);

    solutions[0] = 0;

    int cnt = 0;

    int i = 1;

    for (int tetra_num = 1; tetra_num < MAX_NUM; tetra_num = tetrahedral_number (++i))
    {

        for (int j = tetra_num; j < MAX_NUM; j++)
        {
            solutions[j] = std::min (solutions[j], solutions[j - tetra_num] + 1);
        }

    }

    return solutions;
}

int* solve_odd_problem ()
{
    int* solutions = new int[MAX_NUM + 1];

    std::fill (solutions, solutions + MAX_NUM + 1, MAX_NUM);

    solutions[0] = 0;

    
    int i = 1;

    for (int tetra_num = 1; tetra_num < MAX_NUM; tetra_num = tetrahedral_number(++i))
    {
        if (tetra_num % 2 != 0)
        {
            for (int j = tetra_num; j < MAX_NUM; j++)
            {
                solutions[j] = std::min (solutions[j], solutions[j - tetra_num] + 1);
            }

        }

    }

    return solutions;
}

int main ()
{

    auto solutions = solve_regular_problem ();

    auto odd_solutions = solve_odd_problem ();

    int n = 0;
    while (std::cin >> n, n != 0)
    {

        std::cout << solutions[n] << " " << odd_solutions[n] << std::endl;

    }

    return 0;
}