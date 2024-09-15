#include<iostream>
using namespace std;

void conquere(int arr[],int si,int mid,int ei)
{
	int merged[ei-si+1];
	int idx1=si;
	int idx2=mid+1;
	int x=0;
	
	while(idx1<=mid && idx2<=ei)
	{
		if(arr[idx1]<=arr[idx2])
		{
			merged[x]=arr[idx1];
			x++;
			idx1++;
		}else
		{
			merged[x]=arr[idx2];
			x++;idx2++;
		}
	}
	
	while(idx1<=mid)
	{
		merged[x]=arr[idx1];
		x++;
		idx1++;
	}
	
	while(idx2<=ei)
	{
		merged[x]=arr[idx2];
		x++;
		idx2++;
	}
    int i,j;
	//copy the merged array to original array
	for(i=0 , j = si ; i<x ; i++ , j++)
	{
		arr[j]=merged[i];	
	}
}


int divide(int arr[],int si,int ei)
{
	if(si>=ei)
	{
		return 0;
	}
	
	int mid=(si+ei)/2;
	divide(arr,si,mid);
	divide(arr,mid+1,ei);
    conquere(arr,si,mid,ei);	
}


int main()
{
	int i,j,num;
	cout<<"enter number of elements";
	cin>>num;
	int arr[num];
	
	cout<<"enter the array elements";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	int n=num-1;
	divide(arr,0,n);
	
	cout<<"sorted array:\n";
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
