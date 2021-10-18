#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

node* head=NULL;
int num, pos;

void insert_beginning(int x)
{
   node* n=(node*)malloc(sizeof(node));
   n->data=x;
   n->next=head;
   head=n;
}

void insert_end(int x)
{
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    n->next=NULL;
    node* temp;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=n;
    }
}

void delete_begin()
{
    node* temp;
    temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
}

void delete_end()
{
    if(head==NULL)
    {
        printf("The link is already empty!");
    }

    else if(head->next==NULL)
    {
        node* temp=head->next;
        free(temp);
        temp==NULL;
        head=NULL;
    }

    else
    {
    node* temp1=head;
    node* temp2=head;

    while(temp1->next!=NULL)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=NULL;
    free(temp1);
    temp1=NULL;
    }
    
}

void link_position(int pos, int value)
{
    node* temp=head;
    node* n=(node*)malloc(sizeof(node));
    n->data=value;
    n->next=NULL;
    pos--;
    while(pos!=1)
    {
        temp=temp->next;
        pos--;
    }
    n->next=temp->next; 
    temp->next=n;
}

void delete_position(int pos)
{
    node* temp1=head;
    node* temp2=head;

    if(head==NULL)
    {
        printf("The list is already empty!");
    }

    else if (pos==1)
    {
        head=temp1->next;
        free(temp1);
        temp1=NULL;
    }
     
    else
    {
    while(pos!=1)
    {
        temp2=temp1;
        temp1=temp1->next;
        pos--;
    }
    temp2->next=temp1->next;
    free(temp1);
    temp1=NULL;
    }
}

void print_list()
{   
    printf("Elements in the linked list :\n");

    node* temp;
    for(temp=head;temp->next!=NULL;temp=temp->next)
    {
        printf("%d->", temp->data);
    }
    printf("%d", temp->data);
}

void main()
{  
  char option;
  while(1)
  {   
      scanf(" %c", &option);
      switch(option)
      {
          case 'a': print_list();
                    exit(0);
                    break;

          case 'b': {scanf("%d", &num);
                    insert_beginning(num);
                    break;}
                    
          case 'c': scanf("%d", &num);
                    insert_end(num);
                    break;

          case 'd': scanf("%d", &pos);
                    scanf("%d", &num);
                    link_position(pos,num);
                    break;
                    
          case 'e': delete_begin();
                    break;


          case 'f': delete_end();
                    break;     

          case 'g': scanf("%d", &pos);
                    delete_position(pos);
                    break;
                    
          default: printf("!!! ERROR !!!");
                   break;      
      }
  }
}

