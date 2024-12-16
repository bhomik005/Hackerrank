#include <stdio.h>
#include <math.h>

// A pointer in C++ is used to store the memory address of another variable
void update(int *a,int *b) {
    // temp variable to store the value of a before modifying  
    int temp = *a;
    // a contains the sum
    *a =  *a + *b;
    // b contains the absolute difference
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}