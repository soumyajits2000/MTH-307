#include <stdio.h>
int main()
{
    char name[50];
    char batch[50];
    int phone_number;
    printf("Enter your name:\n ");
    gets(name);
    printf(" \n batch: ");
    scanf("%s",&batch);
    printf("\n Phone Number:");
    scanf("%d",&phone_number);
    printf("\n your name is %s, batch is %s and phone nmber is %d", name,batch,phone_number);
    return 0;
}