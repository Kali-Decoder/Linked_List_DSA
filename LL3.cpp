// insert At Begining 
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void insertBegining(Node* start,int key)
{   
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  
   
    newNode->data=key;
    newNode->next=start;
    start=newNode;
    
}
int main()
{   
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(20);
    head->next->next->next->next=new Node(20);
    // traversalLinkedList(head);
    return 0;
}