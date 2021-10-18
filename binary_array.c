#include<stdio.h>

int size;

void print(int arr[]){

printf("Tree is :\n");
    for(int i=0;i<size;i++)
    { 
        if(arr[i]==-1)
        {
            continue;
        }
        printf("%d ", arr[i]);
    }
}

void printChild(int arr[])
{   
    int a=scanf("%d", &a);
    printf("L child of %d=%d",arr[a], arr[(a*2)+1]);
    printf("R child of %d=%d",a, arr[(a*2)+2]);
    if(a==0)
    {
        printf("The root element has no parent\n");
    }
    else{
    if(a%2==0)
    {
        printf("Parent of %d=%d",a, arr[(a-1)/2]);
    }
    else
    {
        printf("Parent of %d=%d",a, arr[(a-1)/2]);
    }
    }
}

void printRange(int arr[])
{
    int i=0;
    int max=arr[i];
    for(int j=0;j<size;j++)
    {
        if(arr[i]<arr[j])
        {
            i=j;
        }
    }
    printf("Maximum element=%d", arr[i]);
    
    i=0;
    int min=arr[i];
    for(int j=0;j<size;j++)
    {
        if(arr[i]>arr[j])
        {
            i=j;
        }
    }
    printf("Minimmum element=%d", min);
}


void main()
{
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    char input;
    scanf(" %c", &input);
    switch(input)
    {
        case 'a':print(arr);
                 break;

        case 'b': printChild(arr);
                  break;

        case 'c': printRange(arr);
                  break;

        default : printf("Please enter a valid value!");    
    }
}
