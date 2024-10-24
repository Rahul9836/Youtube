#include<stdio.h>
int BiSearch(int a[],int n,int val)
{
	int i=0, j=n-1;
	while(i<=j)
	{
		int mid = (i+j)/2;
		if(a[mid]==val)
		return mid;
		else if(a[mid]<val)
		i=mid+1;
		else
		j=mid-1;
	}
	return -1;
}
int main()
{
    int n;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
    
	int arr[n];
	printf("Enter the values : ");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int val;
	printf("Enter the value that you want to search : ");
	scanf("%d",&val);
	
	int idx = BiSearch(arr,n,val);
	if(idx==-1)
	printf("Value not found");
	else
	printf("Value is found at index no %d",idx);
	
}
