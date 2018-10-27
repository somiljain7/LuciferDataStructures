/*STACK AS AN ARRAY*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size 10
struct person
 {
   char name[size];
   int age;
 };
class stack
 {
    int top;
    person a[size];
    public:
       stack()
        {
           top=-1;//INITIALIZING
        }
       void Push()//INSERTION OF A ELEMENT
        {
	  if(top<size-1)
	    { cout<<"\nname="<<endl;
	      gets(a[++top].name);
	      cout<<"\nage="<<endl;
	      cin>>a[top].age;
            }
          else
            cout<<"Stack overflow";
        }
       void Pop()//DELETION OF AN ELEMENT
        {
           if (top>-1)
            {
               cout<<"\nDeleted element is : ";
               cout<<a[top].name;
			   cout<< a[top].age;
			   top--;
            }
           else
             cout<<"Stack underflow";
        }
      void Display();
 };

 void stack:: Display()
  {
     int i ;
     for(i=top; i>=0; i--)
       {
         cout<<a[i].name;
         cout<<a[i].age;
       }
  }

void main()
 {
   clrscr();
   int x,y=1;
   stack s;
   while (if(y==1))
    {
        cout<<"Menu is : "<<"\n"<< "Enter 1 to push" <<"\n";
        cout<<"Enter 2 to pop"<<"\n";
        cout<<"Enter 3 to display"<<"\n";
        cout<<"Enter 4 to exit"<<"\n";
      cin>>x;
      switch(x)
       {
         case 1: s.Push();
	         break;
         case 2: s.Pop();
                     break;
         case 3: s.Display();
	          break;
         case 4: break;
          }
       cout<<"\n enter 1 for more";
       cin>>y;
}
      
  getch();
 }

