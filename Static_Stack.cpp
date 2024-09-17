#include<iostream>
using namespace std;
#define MAX 5
struct stack
{
	int a[MAX];
	int top;
}s;

void init()
{
	s.top=-1;
}

int isfull()
{
	if(s.top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isemety()
{
	if(s.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(int num)
{
	if(isfull())
	{
		cout<<"\n Stack is Overflow";
	}
	else
	{
		s.top++;
		s.a[s.top]=num;
	}
}

void pop()
{
	int val;
	if(isemety())
	{
		cout<<"\n stack is underflow";
	}
	else
	{
		val=s.a[s.top];
		s.top--;
		cout<<"\n deleted item: "<<val;
	}
}

void display()
{
	int i;
	if(isemety())
	{
		cout<<"\n stack is emety";
	}
	else
	{
		for(i=0;i<=s.top;i++)
		{
			cout<<s.a[i]<<" ";
		}
   }
}
int main()
{
	int ch,item;
	init();
	cout<<"1:Push \n 2:POP \n 3:Display \n 4:Exit";
	while(true)
	{
		cout<<"\n Enter Choice : "<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:	if(isfull())
                 	{
		               cout<<"\n Stack is Overflow";
	                }
	                else
	                {
	                   cout<<"\n enter value to push : ";
	                   cin>>item;
					   Push(item);
				    }   
			       break;
		    case 2:pop();
		           break;
		    case 3:display();
		           break;
		    case 4:return 0;
		    default:cout<<"\n invalid choice";
		}
		
	}
	return 0;
}
