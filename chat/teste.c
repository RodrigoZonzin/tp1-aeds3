#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

typedef struct {
    int x, y;
} point_t;

int connect_points(point_t P[], int N, point_t A, point_t B) {
    int memo[MAX_N][MAX_N] = {{0}};

    for (int l = 0; l < N; l++) {
        for (int i = 0; i < N-l; i++) {
            int j = i + l;
            for (int k = i; k <= j; k++) {
                if (P[k].x > A.x && P[k].x < B.x &&
                    (P[k].y > A.y || P[k].y > B.y)) {
                    int left = k > i ? memo[i][k-1] : 0;
                    int right = k < j ? memo[k+1][j] : 0;
                    memo[i][j] = (left + right + 1 > memo[i][j]) ? left + right + 1 : memo[i][j];
                }
            }
        }
    }

    return memo[0][N-1];
}

int main() {
    int N;
    point_t A, B, P[MAX_N];

    scanf("%d %d %d %d %d", &N, &A.x, &A.y, &B.x, &B.y);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &P[i].x, &P[i].y);
    }

    int ans = connect_points(P, N, A, B);
    printf("%d\n", ans-1);

    return 0;
}
