#include<iostream>
using namespace std;
#define MAX 5

struct queue
{
	int a[MAX];
	int front,rear;
}q;

void init()
{
	q.front=-1;
	q.rear=-1;
}
int isemety()
{
	if(q.front==-1 || q.front>q.rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull()
{
	if(q.rear==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void remove()
{
	if(isemety())
	{
		cout<<"\n no elements in queue to remove";
	}
	else
	{
		int val;
		val=q.a[q.front];
		q.front++;
		cout<<val<<"\n deleted successfully";
	}
}

void add(int item)
{
	if(isfull())
	{
		cout<<"\nqueue overflow";
	}
	else
	{
		if(q.front==-1)
		q.front=0;
		q.rear++;
		q.a[q.rear]=item;
		cout<<"\n element inserted succ...";
	}
}

void display()
{
	int i;
	for(i=q.front;i<=q.rear;i++)
	{
		cout<<q.a[i]<<"\t";
	}
}

int main()
{
	int ch,item;
	init();
	cout<<"\n1:Add(enqueue) \t2:Remove(Dequeue) \t3:Display \t4:Display";
	while(true)
	{
		cout<<"\n enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nenter element:";
				cin>>item;
				add(item);
				break;
			case 2:
				remove();
				break;
			case 3:
				display();
				break;
			case 4:return 1;
			
			default:cout<<"\nInvalide Choice";
		}
		
	}
	return 0;
}
