#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

void print(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head -> value);
        
        head = head -> next;
    }   
}

node* insert_end(node *head, int item) 
{
    node *head = head;
    node *new_node = (node*) malloc(sizeof(node)); 

    new_node -> value = item;
    new_node -> next = NULL;

    if (head != NULL)
    {
        while (head -> next != NULL)
        {
            head = head -> next;
        }

        head -> next = new_node;

        return head;
    }
    else
    {
        return new_node;
    }

}

node* insert_begin(node *head, int item)
{
    node *new_node = (node*) malloc(sizeof(node)); 

    new_node -> value = item;
    new_node -> next = head; 
    return new_node;
}

node *linked_list()
{
    return NULL;
} 

int main()
{
    node *head = linked_list();

    head = insert_begin(head, 100);

    head = insert_end(head, 55);
    
    print(head);

    return 0;
}

