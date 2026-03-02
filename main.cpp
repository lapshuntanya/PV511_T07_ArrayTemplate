#include "ArrayTemplate.h"

int main() {
    srand(time(0));

    int A[6] = {6, 7, -3, 5, 2, -5};
    prinArray(A, 6);

    short B[10] = {0};
    ranArray(B, 10);
    prinArray(B, 10);

    float D[15] = {0};
    ranArray(D, 15, -100, 100);
    prinArray(D, 15);


    return 0;
}