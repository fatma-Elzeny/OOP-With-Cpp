#include <iostream.h>

#include <conio.h>



class stack

{
  private :

		 int top ;

		 int size ;

		 int *ptr;

		


  public :


	  int isFull();

	  int isEmpty();

	
	  stack(){

		 top=0;

		 size =10;

		 ptr= new int [size];


		 cout<<"\n this is the default constructor"<<endl;



	  }



	  stack(int n){

		 top=0;

		 size =n;

		 ptr= new int [size];

		

		 cout<<"\n this is the one parameter constructor"<<endl;



	  }

	 ~stack(){


	  delete []ptr;

	  size=0;

	  

		 cout<<"\n this is the destructor"<<endl;


	 }


	 int push (int n);

	 int pop (int &n);

	 
	 };


void main(void){


   clrscr();

 stack s1(10);

   stack s2(7);

   s1.push(37);

   s1.push(-12);

   s1.push(26);






  if(s1.pop(num)){

				 r
	 cout<<num<<endl;


   }


   if(s1.pop(num)){


	 cout<<num<<endl;


   }


   if(s1.pop(num)){


	 cout<<num<<endl;


   }else cout<<"\n The stack is empty";



   getch();


}


 int stack ::isFull(){



	return (top==size);




 }


  int stack ::isEmpty(){



	return (top==0);




 }

 int stack ::push (int n){

	  if(isFull())

	  return 0;

	  ptr[top]=n;

	  top++;

	  return 1;



 }
 

 int stack :: pop(int &n){


  if(isEmpty())

   return 0;

   top--;

   n=ptr[top];

   return 1;



 }
	