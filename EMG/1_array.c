// Arrays
// stores data in contiguous memory
// allow random access via index

#include<stdio.h>

int main(){
    // 1d Arrays
    // initiation and declaration
    int a[10] = {0,10,0,0,0,0,0,0,0,0};

    // print one value of array
    printf("%d\n",a[1]);
    // here we didn't write &a[1] because array a and its access through index itself is a pointer

    // print address of array
    printf("%p\n",a);
    // print address

    // array traversal
    int A[4] = {100, 101, 102, 103};
    for (int i = 0; i < 4; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

  



    return 0;

}