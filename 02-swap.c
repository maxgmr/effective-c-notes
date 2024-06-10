#include <stdio.h>

void swap(int *, int *); // fn declaration

int main(void) {
    int a = 21;
    int b = 17;
    printf("before: a = %d, b = %d\n", a, b);

    // & generates pointer to operand
    swap(&a, &b);
    printf("after: a = %d, b = %d\n", a, b);
    return 0;
}

// * in fn def indicates param is a pointer to an object/fn of the given type
void swap(int *pa, int *pb) {
    // * in exprs derefs pointer (gets value stored at pointer)
    int t = *pa;
    *pa = *pb;
    *pb = t;
    return;
}
