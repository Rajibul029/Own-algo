	#include<stdio.h>
    int main()
    {
    printf("Enter the size of array: ");
	int n;
	scanf("%d",&n);
	int arr[n],i;
	printf("Enter the array element: ");
	for ( i = 0; i <n; i++)
	{
		scanf("%d",&arr[i]);
		if (i>=2)
		{ int t=i;
			while (t!=0)
			{
				if (arr[t-1] > arr[t])
			{
				int temp=arr[t-1];
				arr[t-1]=arr[t];
				arr[t]=temp;
			}
			t--;
			}
			if (arr[i-1] > arr[i])
			{
				int temp=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for ( i = 0; i < n; i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
}