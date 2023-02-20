#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void* data;
    struct node* next;
}Node;

int main(){
    Node* n1 = (Node*)malloc(sizeof(Node));
    Node* n2 = (Node*)malloc(sizeof(Node));
    int i = 3;
    char c = 'a';

    n1->data = &i;
    n2->data = &c;

    printf("%d\n", *(int*)n1->data);
    printf("%c\n", *(char*)n2->data);

    free(n1);
    free(n2);
return 0; }