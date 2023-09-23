#include <cstdio>

int main()
{
        float A[2][2], B[2];

        while (scanf("%f %f %f %f %f %f",
                                 &A[0][0], &A[0][1], &B[0],
                                 &A[1][0], &A[1][1], &B[1]) != EOF) {
                float det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
                float invA[2][2];
                invA[0][0] = A[1][1] / det;
                invA[0][1] = -A[0][1] / det;
                invA[1][0] = -A[1][0] / det;
                invA[1][1] = A[0][0] / det;
                float ans[2] = {0, 0};
                for (int i = 0; i < 2; i++) {
                        for (int j = 0; j < 2; j++) {
                                ans[i] += B[j] * invA[i][j];
                        }
                }

                printf("%.3f %.3f\n", ans[0], ans[1]);
        }
        return 0;
}