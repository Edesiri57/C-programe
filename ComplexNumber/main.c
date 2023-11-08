// Online C compiler to run C program online
#include <stdio.h>

typedef struct Complex{
    int real;
    int imag;
} cplx;

//Function for the addition
cplx addCplx(cplx a, cplx b) {
    cplx result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

//Fuction for the subtraction
cplx subtractCplx(cplx a, cplx b) {
    cplx result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;

}

cplx divideCplx(cplx a, cplx b) {
    cplx result;
    result.real = a.real / b.real;
    result.imag = a.imag / b.imag;
    return result;

}

cplx multiplyCplx(cplx a, cplx b) {
    cplx result;
    result.real = a.real * b.real;
    result.imag = a.imag * b.imag;
    return result;

}


/*int main() {
    // Write C code here
    cplx num1 = {1,2};
    cplx num2 = {3,5};
    cplx result;
    subCplx(num1,num2,&result);
    printCplx(result);

    return 0;
}*/

/*void subCplx(cplx num1,cplx num2,cplx *result){
    result->real = (num1.real-num2.real);
    result->imag = (num1.imag-num2.imag);
}

void printCplx(cplx num){
    printf("%d - %di",num.real,num.imag);
}*/

int main()
{
    cplx num1;
    cplx num2;
    cplx result;

    printf("Enter first real number: ");
    scanf("%d",&num1.real);
    printf("Enter first imaginary number: ");
    scanf("%d",&num1.imag);

    printf("Enter second real number: ");
    scanf("%d",&num2.real);
    printf("Enter second imaginary number: ");
    scanf("%d",&num2.imag);



    //Result for add
    result = addCplx(num1,num2);
    printf("add: %d + %di\n", result.real, result.imag);

    //Result for sub
    result = subtractCplx(num1,num2);
    printf("sub: %d - %di\n", result.real, result.imag);

    result = divideCplx(num1,num2);
    printf("divide: %d / %di\n", result.real, result.imag);

    result = multiplyCplx(num1,num2);
    printf("multiply: %d * %di\n", result.real, result.imag);




    return 0;


}