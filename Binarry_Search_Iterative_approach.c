/*Implement a function that performs binary search
algorithm using Iterative approach.*/

#include<stdio.h>

int binary_search(int arr[] , int size ,int search_element)
{
	int start=0,end=size-1;
	while(start<=end)
	{
		int middle=start + (end-start)/2;
		if(search_element==arr[middle])
			return middle;
		else if(search_element>arr[middle])
			start=middle+1;
		else
			end=middle+1;
	}
	return -1;
}
int main()
{
	int arr[]={2,4,5,8,9,14,16,19,25,30};
	int size = sizeof(arr) / sizeof(arr[0]);
	int search_element;
	printf("enter a search element: ");
	scanf("%d",&search_element);
	int index = binary_search(arr,size,search_element);
	if(index!=-1)
		printf("element at index %d",index);
	else
		printf("element not found");
	return 0;
}