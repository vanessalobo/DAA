#include<stdio.h>
#include<stdlib.h>
typedef struct node *nodeptr;
typedef struct adjlist *list;
typedef struct gra *graph;
struct node
{
    int data;
    nodeptr next;
};
struct adjlist
{
    nodeptr head; //contains head pointer of the list
};
struct gra
{
    int v;
    list arr; //pointer to the first list

};
nodeptr getnode(int x)
{
    nodeptr temp=(nodeptr)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=x;
    return temp;
}
nodeptr insertBack(nodeptr head, int x)
{
    nodeptr nnode=getnode(x);
    if(head==NULL)
    {


        head=nnode;
        return head;

    }
    else{
    nodeptr temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nnode;
    return head;
    }
}
void display(nodeptr head)
{
    nodeptr head=temp;
    while(temp!=NULL)
    {
        printf("%d\t", temp->data);
        temp=temp->next;
    }
}
graph creategraph(int v)
{
    graph g=(graph)malloc(sizeof(struct gra));
    g->v=v;
    g->arr=(list)malloc(v*sizeof(struct adjlist));
    for(int i=0; i<v; i++)
    {
        g->arr[i].head=NULL;
    }
    return g;
}
void addedge(graph g, int src, int dst)
{

}
void main()
{
    int v;




}
