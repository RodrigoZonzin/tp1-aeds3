#include "ponto.h"

int** createAdjacencyMatrix(Ponto** pts, int n, double max_slope){

    int** adj_matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < num_poinnts; i++) {
        adj_matrix[i] = (int*) calloc(n, sizeof(int));
        for (int j = i+1; j < n; j++) {
            double s = slope(points[i], points[j]);
            if (s <= max_slope) {
                adj_matrix[i][j] = 1;
                adj_matrix[j][i] = 1;
            }
        }
    }
    return adj_matrix;
}
