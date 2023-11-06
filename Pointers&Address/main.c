// *a & x are the samething

/* Declare a pointer variable
Assign address to pointer 
Get the volume of a variable pointed to by a pointer
changing values printed to by pointer
*/ 

#include <stdio.h>
/*
int main(){
    int * a;
    int x = 5;
    a = &x;
    printf("Address = %p, value = %d\n", a, *a);

    *a=20;
    printf("Address = %p, value = %d \n", a,*a);
    x = 50;
    printf("Address = %p, value = %d \n", a,*a);

    int numbers[5] = {1,2,3,4,5};
    
    int *p = numbers;
    printf("Address = %p, value = %d \n", p, *p);

    * numbers = 5;
    * (numbers +1)=20;
    printf("number = %p, value = %d \n", p, *p);
    print_array(numbers, 5);

    return 0;
}

void print_array(int *arr, int size) {
        for (int i = 0; i< size ;i ++) {
            printf("%d ", *(arr + i));
        }
        printf("\n");

    }
*/



void min_max(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0]; // initialize min and max to the first element of the array
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // update min if we find a smaller element
        }
        if (arr[i] > *max) {
            *max = arr[i]; // update max if we find a larger element
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int min, max;
    min_max(arr, 5, &min, &max); // pass min and max by reference
    printf("min: %d\n", min); // Output: min: 1
    printf("max: %d\n", max); // Output: max: 9
    return 0;
    
}