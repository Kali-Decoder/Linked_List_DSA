// search Item In LInked List 

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
int searchNode(Node* start, int key)
{        struct Node* p=start;
        
        if(start==NULL)
        return -1;
        if(start->next==NULL && start->data==key)
        return 1;
        int pos=1;
        while(p->next!=NULL)
        {
            if(p->data==key)
            return pos;
            pos++;
            p=p->next;
        }

        return -1;
        
    
}
int main()
{   
    struct Node* head= new Node(10);
    struct Node* list1= new Node(30);
    struct Node* list2= new Node(40);
    struct Node* list3= new Node(50);

    head->next=list1;
    list1->next=list2;
    list2->next=list3;
    int key;
    cout<<"Enter key "<<endl;
    cin>>key;
    cout<<searchNode(head,key);
    
    
    return 0;
}