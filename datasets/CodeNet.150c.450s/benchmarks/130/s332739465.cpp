#include <cstdio>
#include <vector>

using namespace std;

using Vector=vector<int>;
using Matrix=vector<Vector>;

Vector operator*(Matrix &a, Vector &b) {
    Vector c(a.size());
    for (size_t i=0; i<a.size(); ++i)
        for (size_t j=0; j<a[i].size(); ++j)
            c[i] += a[i][j]*b[j];

    return c;
}

int main() {
    size_t n, m;
    scanf("%zu %zu", &n, &m);

    Matrix a(n, Vector(m));
    for (size_t i=0; i<n; ++i)
        for (size_t j=0; j<m; ++j)
            scanf("%d", &a[i][j]);

    Vector b(m);
    for (size_t j=0; j<m; ++j)
        scanf("%d", &b[j]);

    Vector c=a*b;
    for (size_t i=0; i<n; ++i)
        printf("%d\n", c[i]);

    return 0;
}