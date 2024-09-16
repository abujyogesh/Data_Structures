#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	i++;
	int temp=arr[i];
	arr[i]=pivot;
	arr[high]=temp;
	
	return i;
}


void QuickSort(int arr[],int low,int high)
{
	if(low < high)
	{
		int pidx=partition(arr,low,high);
		
		QuickSort(arr,low,pidx-1);
		QuickSort(arr,pidx+1,high);
	}
}
int main()
{
	int arr[]={2,4,3,7,1,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	QuickSort(arr,0,n-1);
	
	//print
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
