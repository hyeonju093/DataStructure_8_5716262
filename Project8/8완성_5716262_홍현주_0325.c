/*FUNCTION MatrixAddition()
DECLARE matrix1[2][2], matrix2[2][2], result[2][2]

PRINT "ù ��° 2x2 ��� �Է�:"
FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
READ matrix1[i][j]

PRINT "�� ��° 2x2 ��� �Է�:"
FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
READ matrix2[i][j]

FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
result[i][j] = matrix1[i][j] + matrix2[i][j]

PRINT "��� ���� ���:"
FOR i FROM 0 TO 1 DO
FOR j FROM 0 TO 1 DO
PRINT result[i][j], " "
PRINT NEW LINE
END FUNCTION
*/
#include <stdio.h>

void MatrixAddition() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("ù ��° 2x2 ��� �Է�:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf_s("%d", &matrix1[i][j]);
        }
    }

    printf("�� ��° 2x2 ��� �Է�:\n");
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

    printf("��� ���� ���:\n");
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
