//Menu driven program to traverse,insert and delete an array
#include"stdio.h"
#define max 100
int i;
void TraverseL(int Arr[], int size);
void TraverseR(int Arr[],int size);
void InsertAtBeginning(int Arr[], int size);
void InsertAtEnd(int Arr[], int size, int data);
void InsertAtAny(int Arr[], int size, int pos, int data);
void DeleteFromStart(int Arr[], int size);
void DeleteFromEnd(int Arr[], int size);
void DeleteAny(int Arr[], int size, int pos);
int main()
{	
	int Arr[max];
	int size,choice,pos,data;
	int i;	
	printf("Enter the size of Array:-");
	scanf("%d",&size);
	printf("Enter %d elements:",size);
	for(i=0;i<size;i++)
		scanf("%d",&Arr[i]);

	do{
		printf("Enter 1 to Traverse (Left to Right) \n Enter 2 to Traverse (Right to left) \n Enter 3 to Insert at beginning \n Enter 4 to insert at end \n Enter 5 to insert at any position \n Enter 6 to delete from beginning\n Enter 7 to delete from end \n Enter 8 to delete from any positon\n Enter 0 to exit.\nEnter your choice-");
		scanf("%d",&choice);		
		switch(choice){
			case 1:
				TraverseL(Arr,size);
				break;
			case 2:
				TraverseR(Arr,size);
				break;
			case 3:
				InsertAtBeginning(Arr,size);
				break;
			case 4:
				printf("Enter data:\n");
				scanf("%d",&data);
				InsertAtEnd(Arr,size,data);
				break;
			case 5:
				printf("Enter data:-");
				scanf("%d",&data);
				printf("Enter position\n");
				scanf("%d",&pos);
				InsertAtAny(Arr,size,pos,data);
				break;		 					
			case 6:
				DeleteFromStart(Arr,size);
				break;
			case 7:
				DeleteFromEnd(Arr,size);
				break;
			case 8:
				printf("Enter position:\n");
				scanf("%d",&pos);
				DeleteAny(Arr,size,pos);
				break;
			case 0:
				printf("Program ended\n");
				break;
		}
	}while(choice!=0);
	
	return 0;
}
void TraverseL(int Arr[],int size)
{	
	for(i=0;i<size;i++)
		printf("%d",Arr[i]);
}
void TraverseR(int Arr[],int size)
{	
	for(i=size-1;i>=0;i--)
		printf("%d",Arr[i]);
	printf("\n");
} 
void InsertAtBeginning(int Arr[],int size)
{	
	int data;
	(size)++;	
	printf("Enter data to be inserted:\n");
	scanf("%d",&data);
	for(i=size;i>0;i--)
	{
		Arr[i]=Arr[i-1];
	}
	Arr[0]=data;
	
}
void InsertAtEnd(int Arr[],int size,int data)
{
	size=size+1;
	Arr[size-1]=data;
}
void InsertAtAny(int Arr[], int size, int pos, int data)
{	
	size=size+1;
	for(i=size-1;i<pos;i--)
	{
		Arr[i]=Arr[i-1];
	}
	Arr[pos-1]=data;
}
void DeleteFromStart(int Arr[], int size)
{
	for(i=0;i<size-1;i++)
	{
		Arr[i]=Arr[i+1];
	}
	size--;
}
void DeleteFromEnd(int Arr[],int size)
{
	size=size-1;
}
void DeleteAny(int Arr[], int size, int pos)
{
	for(i=pos;i<size-1;i++)
	{
		Arr[i]=Arr[i-1];
	}
	size--;
}
