#include <stdio.h>
/*
   software Engineering Basics; Greeting program
   Exercise 1
*/


int main(){
    // Display user prompt
    printf("input your name to recieve your greting ==>> ");
    char name[20];

    //scanf("%s",&name);
    gets(name);

    //print out Greeting
    printf("Hello, %s How is your day going?", name);
}
