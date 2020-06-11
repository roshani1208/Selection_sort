#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 Selection_sort(a,n);
  
}
 void Selection_sort(int *a,int n)
 {
   int i,j,min,temp;
   for(i=0;i<n;i++)
   {
     min=i;
	 for(j=i+1;j<n;j++)
	 {
	   if(a[j]<a[min])
	   {
	     min=j;
	   }
	   }
	   if(min!=i)
	   {
	    temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		}
   }
   for(i=0;i<n;i++)
   printf(" %d",a[i]);
 }