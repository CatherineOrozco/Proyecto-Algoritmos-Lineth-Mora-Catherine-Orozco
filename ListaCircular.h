#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

class ListaCircular {
public:
    ListaCircular();
        ListaCircular(const ListaCircular& orig);
    virtual ~ListaCircular();
    
void insertIntoHead(char value);
void insertIntoOrder(char value);
void deleteToList(char value);
void printList();

    struct node{
    char data;
    struct node *nextPtr, *prevPtr;
};
/*variables*/
typedef struct node NODE;
typedef NODE *NODEPTR;

NODEPTR headNode, tailNode;


    
private:

};

#endif /* LISTAACTION_H     /*métodos para insertar*/


