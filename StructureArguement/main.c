#include<stdio.h>
#include<string.h>

struct person initializeStruct();
struct person{
    char name[20];
    int age;
    char address[100];
    char num[50];
};

void printPerson(struct person person){
    printf("\n%s ->>>>>> %d ->>>>>>>>>>> %s ->>>>> %d", person.name,person.age,person.address,person.num);

}

    struct person initializeStruct(){
    struct person p;
    printf("\ninput your name: ");
    fgets(p.name, 100,stdin);
    printf("\ninput your age: ");
    scanf("%d", &p.age);
    printf("\ninput your address:  ");
    scanf("%s",p.address);
    printf("\ninput your phone nuber: ");
    scanf("%d", &p.num);

    return p;

}

struct person getInformation();

int main()
{
    struct person p;

    p = getInformation();

    printf("\nDisplaying information\n");
    printf("\nName: %s", p.name);
    printf("\nAge: %d", p.age);
    printf("\nAddress: %s",p.address);
    printf("\nPhone Number: %s", p.num);
    
    
    return 0;
}
struct person getInformation() 
{
  struct person s1;

  printf("\nEnter name: ");
  fgets (s1.name,sizeof(s1.name),stdin);
  s1.name[strcspn(s1.name, "\n")] = '\0'; // Remove newline from input
  //fclose(stdin);
   //getchar();

  printf("\nEnter age: ");
  scanf("%d", &s1.age);
  getchar();
  printf("\nEnter address: ");
  fgets (s1.address,sizeof(s1.address),stdin);
  s1.address[strcspn(s1.address, "\n")] = '\0'; // Remove newline from input
  printf("\nEnter phone number: ");
  scanf("%s", s1.num);
  return s1;
}