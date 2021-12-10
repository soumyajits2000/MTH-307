//first linked list program
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int num;
    struct node* next;

}node;

//function to create a linked list with 7 nodes

int main()
{
    int fst,snd,trd,frth,fth,sxth,svth;
    printf("\nYou are about to create a linked list with 7 nodes without using loops"); 
    printf("\n---------------------------------------------------------------------");

    node* first = NULL;
    node* second = NULL;
    node* third = NULL;
    node* fourth = NULL;
    node* fifth = NULL;
    node* sixth = NULL;
    node* seventh = NULL;

    first =(node*)malloc(sizeof(node));
    second =(node*)malloc(sizeof(node));
    third =(node*)malloc(sizeof(node));
    fourth =(node*)malloc(sizeof(node));
    fifth =(node*)malloc(sizeof(node));
    sixth =(node*)malloc(sizeof(node));
    seventh =(node*)malloc(sizeof(node));

    first->num = fst;
    first->next = second;

    second->num =snd;
    second->next = third;

    third->num = trd;
    third->num = fourth;

    fourth->num = frth;
    fourth->next= fifth;

    fifth->num = fth;
    fifth->next = sixth;

    sixth->num = sxth;
    sixth->next = seventh;

    seventh->num = svth;
    seventh->num = NULL;
    
    printf("\nEnter the value in first node: ");
    scanf("%d",&fst);
    printf("\nEnter the value in second node: ");
    scanf("%d",&snd);
    printf("\nEnter the value in third node: ");
    scanf("%d",&trd);
    printf("\nEnter the value in fourth node: ");
    scanf("%d",&frth);
    printf("\nEnter the value in fifth node: ");
    scanf("%d",&fth);
    printf("\nEnter the value in sixth node: ");
    scanf("%d",&sxth);
    printf("\nEnter the value in seventh node: ");
    scanf("%d",&svth);

    printf("\nThe respective values of the nodes");
    printf("\n------------------------------------------------");
    printf("\nValue of the nodes \n first node: %d \n second node: %d \n third node: %d \n fourth node: %d \n fifth node: %d \n sixth node: %d \n seventh node: %d \n ", fst,snd,trd,frth,fth,sxth,svth);

    
    return 0;
}