/*FUNCTION MatrixAddition()
DECLARE matrix1[2][2], matrix2[2][2], result[2][2]

PRINT "첫 번째 2x2 행렬 입력:"
FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
READ matrix1[i][j]

PRINT "두 번째 2x2 행렬 입력:"
FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
READ matrix2[i][j]

FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
result[i][j] = matrix1[i][j] + matrix2[i][j]

PRINT "행렬 덧셈 결과:"
FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
PRINT result[i][j], " "
PRINT NEW LINE
END FUNCTION
*/
#include <stdio.h>

void MatrixAddition() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("첫 번째 2x2 행렬 입력:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf_s("%d", &matrix1[i][j]);
        }
    }

    printf("두 번째 2x2 행렬 입력:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf_s("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("행렬 덧셈 결과:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    MatrixAddition();
    return 0;
}
