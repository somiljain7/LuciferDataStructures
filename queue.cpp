//QUEUE as an array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
# define size 50
class queue
{
 int Arr[size];
 int front,rear; 
 public:
 queue()  //initializing
  {
     front=-1;
     rear=-1;
  }
  void display();
  void insert (int k)
   {
    if(front==-1&&rear==-1)
       {
         front++;
         rear++;
         Arr[rear]=k;
         }
      else if (rear==size-1)
         cout<<"Queue is full.";
      else
          { 
           rear++;
           Arr[rear]=k;
           }
 }

 int Delete()
{
  int k;
  if(front==-1&&rear==-1)
    cout<<"Queue is empty"; 
 else if (front==rear)
   {
     k=Arr[front];
     front=-1;
     rear=-1;
   }
 else
   {
     k=Arr[front];
     front++;
   }
  return k;
}
};
void queue::display()
{
 int i;
 for(i=front; i<=rear; i++)
   {
     cout<<Arr[i]<<" ";
   }
}
void main()
{
 clrscr();
 queue Q;
 int k,j,c;
 while( c!=4)
   {
    cout<<"Enter the choice accordingly";
    cout<<"\n 1 To insert an element     ";
    cout<<"\n 2 To delete an element     ";
    cout<<"\n 3 Display the Queue        ";
    cout<<"\n 4 Exit the program         ";
    cout<<"\n   Enter the choice        :";
    cin>>c;
    switch (c)
    {
    case 1 : cout<<"\nEnter the element to be inserted element in the queue:";
	   cin>>k;
	   Q.insert(k);
	   break;
     case 2 : cout<<"\nDisplay the element deleted";
	   j=Q.Delete();
	   cout<<j;
	   break;
    case 3 : Q.display();
	   break;
    case 4 : cout<<"\n Leave the program";
	   break;
    }
     }
 getch();
}

