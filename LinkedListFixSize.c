#include <stdio.h>

struct Bio
{
    char name[50];
    int age;
    int BatchNumber;
};

struct Bio students[2];

int main()
{
    int size = sizeof students / sizeof *students;
    
    for(int i = 0; i < size; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s", students[i].name);
        printf("Enter Student Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Student Batch Number: ");
        scanf("%d", &students[i].BatchNumber);
    }
    
    printf("\nName Age Batch\n");
    for(int i = 0; i < size; i++)
    {
        printf("\n%s ", students[i].name);
        printf("%d ", students[i].age);
        printf("%d \n", students[i].BatchNumber);
    }

    return 0;
}
