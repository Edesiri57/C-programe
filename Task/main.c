#include <stdio.h>

int main(){
    char name[50];
    float MathScore, EnglishScore, PhysicsScore, AverageScore;

    //input students name
    printf("Enter the students name; ");
   // scanf("%s", &name); Any of this two is acceptable for whole name 
   //gets(name);
   fgets(name,20,stdin);

    //input score for Maths, English and Physics
    printf("Enter the MathScore; ");
    scanf("%f", &MathScore);

    printf("Enter rhe EnglishScore; ");
    scanf("%f", &EnglishScore);

    printf("Enter the PhysicsScore; ");
    scanf("%f", &PhysicsScore);

    //Calculate the Average score
    AverageScore = (MathScore+EnglishScore+PhysicsScore)/3.0;
    
    //output the student name and average score
    printf("student:%s \n", name);
    printf("AverageScore:%f", AverageScore);


    return 0;

}