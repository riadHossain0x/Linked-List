#include <stdio.h>
#include <stdlib.h>

struct node {
   char name[50];
   int age;
   struct node *next;
};
struct node *head = NULL;

void insertData(char *name, int age) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
	
   link->name[50] = name;
   link->age = age;
	
   link->next = head;
	
   head = link;
   //printf("%s", name);
}

void printList() {
   struct node *ptr = head;
	
   while(ptr != NULL) {
      printf("(%s,%d) ",ptr->name,ptr->age);
      ptr = ptr->next;
   }
	
}

int main()
{
    int size;
    char name[50];
    int age;
    
    printf("How many data you want to insert? ");
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s", name);
        printf("Enter Student Age: ");
        scanf("%d", &age);
        insertData(name, age);
    }
    
    printList();
    return 0;
}