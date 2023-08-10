/*Implement a function that performs binary search
algorithm using recursive approach.*/

#include<stdio.h>

int binary_search(int arr[] , int start ,int end,int search_element)
{
	if(start>end)	return -1;
	int middle=start + (end-start)/2;
		if(search_element==arr[middle])
			return middle;
		else if(search_element>arr[middle])
			return binary_search(arr,middle+1,end,search_element);
		else
			return binary_search(arr,start,middle-1,search_element);
}
int main()
{
	int arr[]={2,4,5,8,9,14,16,19,25,30};
	int search_element;
	printf("enter a search element: ");
	scanf("%d",&search_element);
	int index=binary_search(arr,0,9,search_element);
	if(index!=-1)
		printf("element at index %d",index);
	else
		printf("element not found");
	return 0;
}