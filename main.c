/*
 * CHÚ Ý: Để dễ thao tác thì các mảng ma trận trong code này sẽ chạy từ phần tử 1
 * Do vị trí của ma trận thường bắt đầu từ phần tử [1][1]
 * Dinh Tuan Anh 20185429
 */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include <stdbool.h>
// ================================ KHÔNG XÓA CÁC IMPORT TRÊN DÒNG NÀY=====================================
#include "matrix.h"
#include "gaussGJ.h"
void main() {
    FILE *fin;
    fin = fopen("C:\\Users\\TuanAnh\\CLionProjects\\gauss-detmatrix\\input.txt","r");
    fscanf(fin,"%d\n",&n);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            fscanf(fin,"%f\n",&A[i][j]) ;
        }
    }
    inMaTranHeSo();
    printf("-=====================================================- \n");
    khuGauss(n);
    inMaTranHeSo();
    float det = 1;
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            if (j == i){
                det = det * A[i][j];
            }
        }
    }
    printf("%f",det);
    fclose(fin);
}