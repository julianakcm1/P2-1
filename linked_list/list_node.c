#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *proximo;
};

void listar (struct node *aux)
{
    while (aux != NULL)
    {
        printf("%d\n", aux -> value);
    
        aux = aux -> proximo;
    }   
}

int main()
{
    struct node *first_node = (struct node*) malloc(sizeof(struct node));
    struct node *second_node = (struct node*) malloc(sizeof(struct node));
    struct node *third_node = (struct node*) malloc(sizeof(struct node));
    struct node *fourth_node = (struct node*) malloc(sizeof(struct node));

    first_node -> value = 3;
    first_node -> proximo = second_node;

    second_node -> value = 5;
    second_node -> proximo = third_node;

    third_node -> value = 7;
    third_node -> proximo = fourth_node;

    fourth_node -> value = 9;
    fourth_node -> proximo = NULL;

    listar(first_node); // funcao ou na main
    
    // lista encadeada com 4 elementos 

    /*struct node *aux = first_node; // tem o mesmo endereço, apontam para o mesmo lugar
    
    while (aux != NULL) // condição de parada
    {
        printf("%d\n", aux -> value);
    
        aux = aux -> proximo; // o auxiliar vai passar a apontar com o endereço de memória do ponteiro proximo
        // aux passa a apontar para o proximo de aux   
    }*/   

    return 0;
}