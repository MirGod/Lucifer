#include<stdio.h>

struct Affiliation
{
    char section[50];
    char department[50];
    char university_name[50];
    char city[50];
};

struct Lucifer
{
    char name[50];
    int  age;
    int roll_number;
    int total_marks;
    struct Affiliation affiliation;
};

int main()
{
    struct Lucifer x[3];
    int i;
    char idk[100];

    for(i=0; i<3; i++)
    {   printf("Enter Name : ");
        fgets(x[i].name, sizeof(x[i].name), stdin);
        printf("Enter Age : ");
        scanf("%d",&x[i].age);
        printf("Enter Roll Number : ");
        scanf("%d",&x[i].roll_number);
        printf("Enter Total Marks : ");
        scanf("%d",&x[i].total_marks);
        fgets(idk, sizeof(idk), stdin);
        printf("Enter Section : ");
        fgets(x[i].affiliation.section, sizeof(x[i].affiliation.section), stdin);
        printf("Enter Department : ");
        fgets(x[i].affiliation.department, sizeof(x[i].affiliation.department), stdin);
        printf("Enter University : ");
        fgets(x[i].affiliation.university_name, sizeof(x[i].affiliation.university_name), stdin);
        printf("Enter City : ");
        fgets(x[i].affiliation.city, sizeof(x[i].affiliation.city), stdin);
    }
    struct Lucifer *p = x;
    for (i = 0; i < 3; i++)
    {
        printf("%s", p->name);
        printf("%d\n", p->age);
        printf("%d\n", p->roll_number);
        printf("%d\n", p->total_marks);
        printf("%s", p->affiliation.section);
        printf("%s", p->affiliation.department);
        printf("%s", p->affiliation.university_name);
        printf("%s", p->affiliation.city);
        printf("\n");

        p++;
    }


    return 0;
}