#include <iostream>
using namespace std;
int stack[10], n=10, top1=-1,top2=n;
void push1(int val) {
   if(top1>=top2)
   cout<<"Stack Overflow !"<<endl;
   else {
      top1++;
      stack[top1]=val;
   }
}
void push2(int val)
{
    if(top2<=top1)
    {
        cout<<"Stack Overflow !"<<endl;
    }
    else
    {
        top2--;
        stack[top2]=val;
    }
}
void pop1() {
   if(top1<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top1] <<endl;
      top1--;
   }
}
void pop2()
{
    if(top2>n)
    {
        cout<<"Stack Underflow !"<<endl;
    }
    else
    {
        cout<<"The popped element is "<<stack[top2]<<endl;
        top2++;
    }
}
void display1() {
   if(top1>=0) {
      cout<<"Stack elements are: ";
      for(int i=top1; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack 1 is empty"<<endl;
}
void display2()
{
	if(top2<=n)
	{
		cout<<"Stack 2 elements are: ";
		for(int j=top2; j<n;j++)
     	cout<<stack[j]<<" ";
    	cout<<endl;
	}
	else
	{
		cout<<"Stack 2 is empty"<<endl;
	}
}

int main() {
   int ch, val;
      do {
     		cout<<"Enter choice: "<<endl;
   			cout<<"1) Push in stack 1"<<endl;
  			cout<<"2) Pop from stack 1"<<endl;
  			cout<<"3) Push in stack 2"<<endl;
  			cout<<"4) Pop form stack 2"<<endl;
   			cout<<"5) Display stack 1"<<endl;
   			cout<<"6) Display stack 2"<<endl;
   			cout<<"7) Exit"<<endl;
			cin>>ch;
      
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push1(val);
            break;
         }
         case 2: {
            pop1();
            break;
         }
         case 3:
         	{
         		cout<<"Enter value to be pushed: "<<endl;
         		cin>>val;
         		push2(val);
         		break;
			 }
		 case 4:
		 	{
		 		pop2();
		 		break;
			 }
         case 5: {
            display1();
            break;
         }
         case 6:
         	{
         		display2();
         		break;
			 }
         case 7: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=7);
   return 0;
}
