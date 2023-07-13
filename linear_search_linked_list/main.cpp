//
//  main.cpp
//  linear_search_linked_list
//
//  Created by Uby H on 13/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct  Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
struct Node *search(struct Node *p, int key)
{
    while(p!=NULL)
    {
        if(p->data==key)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}
int main()
{
    int n,key;
    cout<<"Enter the number of elements in the linked list : "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter all the elements in the linked list : "<<endl;
    for(int i=0;i<n;i++)cin>>A[i];
    create(A,n);
    cout<<"Enter the element to be searched for in the linked list : "<<endl;
    cin>>key;
    if(search(first,key)==NULL)
        cout<<"The given element is not present in the linked list "<<endl;
    else
        cout<<"The entered element is present in the linked list "<<endl;
    return 0;
}
