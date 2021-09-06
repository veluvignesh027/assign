#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 1 . sorting in ascending order
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
void mergesort(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(a,i,mid); 
mergesort(a,mid+1,j); 
merge(a,i,mid,mid+1,j);
}
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
int temp[50];
int i,j,k;
i=i1; 
j=i2; 
k=0;
while(i<=j1 && j<=j2) 
{
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=j1) 
temp[k++]=a[i++];
while(j<=j2) 
temp[k++]=a[j++];
for(i=i1,j=0;i<=j2;i++,j++)
a[i]=temp[j];
}
// 2 . sorting in decending order
void sortd()
{
	int a[30],n,i;
	printf("Enter no of elements:");
			scanf("%d",&n);
			printf("Enter array elements:");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			mergesort(a,0,n-1);
			printf("\nSorted array is :");
			for(i=n-1;i>=0;i--)
			printf("%d ",a[i]);

}
// 3. second largest element 
int seclar()
{
	int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d", a[n-2]);
}
// 3. printing matrix
void matrix()
{
	int l,m;
	printf("Enter row length : ");
	scanf("%d",&l);
	printf("Enter coulmn length : ");
	scanf("%d",&m);
	int a[l][m];
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\n Enter element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
}
// 5. addition of two matrix
void add2mat()
{
	int l,m;
	printf("Enter row length : ");
	scanf("%d",&l);
	printf("Enter coulmn length : ");
	scanf("%d",&m);
	int a[l][m];
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\n Enter element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("for second matrix \n");
	int b[l][m];
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\n Enter element [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Result matrix is : \n");
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	char ch;
	do{
	printf("1. sort in ascending \n");
	printf("2. sort in decending \n");
	printf("3. second largest  \n");
	printf("4. matrix printing \n");
	printf("5. addition of 2 matrix \n ");
	printf("\n What do you want to perform ?? \n ");
	int a[30],n,i;
	int abb;
	scanf("%d",&abb);
	switch(abb)
	{
		case 1:
			printf("Enter no of elements:");
			scanf("%d",&n);
			printf("Enter array elements:");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			mergesort(a,0,n-1);
			printf("\nSorted array is :");
			for(i=0;i<n;i++)
			printf("%d ",a[i]);
			break;
			
		case 2:
			sortd();
			break;
		case 4:
			matrix();
			break;
		case 5:
			add2mat();
			break;
		case 3:
			seclar();
			break;
		default:
			break;

	}
	printf ("Do you want to repeat the operation Y/N: ");
	scanf (" %c", &ch);
}while(ch=='Y' || ch == 'N');
}







