#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }

};


int main()
{    
    Node *head;
    Node *p=head;
    int n;
    cout<<"Enter Key"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {   int y;
        cout<<"Enter :"<<i+1<<" Element"<<endl;
        cin>>y;
        head=new Node(y);
        head=head->next;
        
    }
    head=p;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }




    


    return 0;
}