#include "ListaCircular.h"
#include "ListaCircular.h"
#include <malloc.h>
#include <stdlib.h>

ListaCircular::ListaCircular() {
    headNode=NULL;
}

ListaCircular::ListaCircular(const ListaCircular& orig) {
}

ListaCircular::~ListaCircular() {
}

void ListaCircular::insertIntoHead(char value){
    NODEPTR newPtr,tempPtr;
    newPtr=(NODEPTR)malloc(sizeof(NODE));
    newPtr->data=value;
    tempPtr=headNode;
    newPtr->nextPtr=NULL;
   if(tempPtr==NULL){
        headNode=newPtr;
        tailNode=newPtr;
        headNode->nextPtr=tailNode;
        tailNode->nextPtr=headNode;       
    }
    else{ 
       tempPtr=headNode;
       headNode=newPtr;
       headNode->nextPtr=tempPtr;
       tempPtr->prevPtr=headNode;       
       tailNode->nextPtr=headNode;
       headNode->prevPtr=tailNode;
    } 
}    


void ListaCircular::insertIntoOrder(char value){
    NODEPTR newPtr,tempPtr, prevPtr;
    newPtr=(NODEPTR)malloc(sizeof(NODE));
    newPtr->data=value;
    tempPtr=headNode->nextPtr;
    while(tempPtr!=headNode && tempPtr->data!=value){
        if(newPtr->data> tempPtr->data){
            prevPtr->nextPtr=newPtr;
            newPtr->nextPtr=tempPtr;
        }
        prevPtr=tempPtr->nextPtr;
        tempPtr=tempPtr->nextPtr;
    }
    
}//insertIntoOrder
void ListaCircular::deleteToList(char value){
    NODEPTR tempPtr;   
    tempPtr=headNode;    
    if(tempPtr==NULL){
        printf("The list is empty.\n\n");
    }
    if(headNode->data==value){
            headNode->prevPtr->nextPtr=headNode->nextPtr;
            headNode->nextPtr->prevPtr=headNode->prevPtr;            
            headNode=tempPtr->nextPtr;
            tempPtr=NULL;
        }//if(headNode->data==value)
            while(tempPtr!=NULL){
            if(tempPtr->data==value){
                tempPtr->prevPtr->nextPtr=tempPtr->nextPtr;
                tempPtr->nextPtr->prevPtr=tempPtr->prevPtr;
                tempPtr=NULL;
            }else{
                tempPtr = tempPtr->nextPtr;
//                              
            }//else
        }//while(tempPtr!=NULL)  
}//deleteToList

void ListaCircular::printList(){
    NODEPTR tempNode = headNode;
     printf("%c--> ", tempNode->data);
     tempNode=tempNode->nextPtr;
     while(tempNode!=headNode){
          printf("%c--> ", tempNode->data);
         tempNode=tempNode->nextPtr;
     }
}


