#include <cstdio>
#include <iostream>
double sol[10000][2];
int main()
{
    double a, b, e, c, d, f;
    int i = 0;
    while (std::cin >> a >> b >> e >> c >> d >> f)
    {
        double det = a * d - b * c;

        double aa = d / det, bb = -b / det, cc = -c / det, dd = a / det;
        sol[i][0] = aa * e + bb * f;
        sol[i][1] = cc * e + dd * f;

        i++;
    }
    for (int j = 0; j < i; j++)
        printf("%.3f %.3f\n", sol[j][0], sol[j][1]);
    return 0;
}