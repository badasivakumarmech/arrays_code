#include<stdio.h>

int main()
{
    int a[100],i,n;
    printf("Enter Array 1-100: ");
    scanf("%d",&n);
    printf("Input %d elements in the array :",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array are: ");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }

}
Write a program in C to store elements in an array and print it.
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
and so on.
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9 

#include<stdio.h>

int main()
{
    int a[100],n,i;
    printf("Enter array 1-100: ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array : ",n);
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("The values store into the array are : \n");
    for(i=0; i<n; i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    printf("The values store into the arry in revese are: \n");
    for (int i = n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
}
Write a program in C to read n number of values in an array and display it in reverse order.
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2 

#include<stdio.h>
int main()
{
    int a[100],n,i,s=0;
    printf("Enter Array size to 1-100: ");
    scanf("%d",&n);
    printf("Enter %d Array values: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("Sum of the Array is %d",s);

}
Write a program in C to find the sum of all elements of the array.
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15 

#include<stdio.h>
int main()
{
    int a[100],n,i,j,t;
    printf("Input the size of array 1-100 : ");
    scanf("%d",&n);
    printf("Input 5 elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=n-2;i++)
    {
        for(j=i+1; j<=n-1;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Elements of array in sorted ascending order: \n");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }

}
Write a program in C to sort elements of the array in descending order. Go to the editor
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1 

#include<stdio.h>
int main()
{
    int a[100],n,i,j,t;
    printf("Input the size of array 1-100 : ");
    scanf("%d",&n);
    printf("Input 5 elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=n-2;i++)
    {
        for(j=i+1; j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Elements of array in sorted ascending order: \n");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }

}
Write a program in C to sort elements of array in ascending order. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9
 
#include<stdio.h>
int main()
{
    int a[100],n,i,max=-32768,min=32767;
    printf("Emter the size of array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max < a[i])max = a[i];
        if(min > a[i])min = a[i];
    }
    printf("Maximum element is :%d\n",max);
    printf("Minimum element is :%d",min);  

}
Write a program in C to find the maximum and minimum element in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21 

#include<stdio.h>
int main()
{
    int a[100],n,i,j,t;
    printf("Input the size of array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Expected Output:\n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }

    }
    printf("Elements of the array in sorted descending order:");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    printf("The Second Largest element in the array is:%d ",a[1]);
    
}
Write a program in C to find the second largest element in an array. Go to the editor

Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6 

#include<stdio.h>
int main()
{
    int a[9999],n,i,j,t;
    printf("Input the size of array: ");
    scanf("%d",&n);
    if(n<9999)
    {
        printf("Input %d elements in the array: ",n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Expected Output: \n");
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf("Elements of array in sorted ascending order:");
        for(i=0; i<n; i++)
        {
            printf("%3d",a[i]);
        }
        printf("\n");
        printf("The second smallst element in the array: %d",a[1]);

    }
    else {
        printf("*****Input is Under the 9999 Only*****");
    }
   
}
Write a program in C to find the second smallest element in an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4 

#include<stdio.h>
int main()
{
    int a[100],b[length],n,i,length;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(i=0; i<n; i++)
    {
        Scanf("%d",&a[i]);
    }
    printf("Expected Output:\n");
    printf("The elements stored in the first array are: \n");
    for(i=0; i<n;i++)
    {
       printf("%3d",a[i]);
    }
    length= sizeof(a)/sizeof(a[0]);
    for(i=0; i<length; i++)
    {
        a[i]=b[i];
    }
    printf("\n");
    printf("Elements of New Array: \n");
    for(i=0; i<n; i++)
    {
        printf("%3d",b[i]);
    }

} 
#include <stdio.h>    
     
int main()    
{    
    int arr1[5];int n;
    printf("Input the number of elements to be stored in the array is size 5 onely : ");
    scanf("%d",&n);
    if(n==5)
    {
         printf("Input %d elements in the array :",n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr1[i]);
        } 
        printf("Expected Output : \n");
        int length = sizeof(arr1)/sizeof(arr1[0]);    
        int arr2[length];    
        for (int i = 0; i < length; i++)
        {     
            arr2[i] = arr1[i];     
        }      
        printf("The elements stored in the first array are :\n");    
        for (int i = 0; i < length; i++) 
        {     
            printf("%d ", arr1[i]);    
        }    
        printf("\n");    
        printf("The elements copied into the second array are : \n");    
        for (int i = 0; i < length; i++) 
        {     
            printf("%d ", arr2[i]);    
        }
    }
    else {
        printf("******Input array size is only 5 only***** ");
    }
        
    return 0;    
}    
Input the number of elements to be stored in the array : 5
Input 5 elements in the array :3 4 5 6 7 8
Expected Output : 
The elements stored in the first array are :
3 4 5 6 7 
The elements copied into the second array are : 
3 4 5 6 7  

#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n,i,tem;
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%3d",&arr1[i]);
    }
    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%3d",&arr2[i]);
    }
    printf("Expected Output: \n");
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr1[i]<arr1[j])
            {
                tem=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=tem;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr2[i]<arr2[j])
            {
                tem=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=tem;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr1[i]<arr2[j])
            {
                tem=arr1[i];
                arr1[i]=arr2[j];
                arr2[j]=tem;
            }
        }
    }  *
    printf("First elements decending:");
    for(i=0; i<n; i++)
    {
        printf("%3d",arr1[i]);
       
    }
    printf("\n");
    printf("second elements decending:");
    for(i=0; i<n; i++)
    {
        printf("%3d",arr2[i]);
       
    }


} 
#include<stdio.h>
int main()
{
    int n1,n2,n3,i;
    int arr1[n1],arr2[n2],arr3[n3];
    printf("Enter the size of 1st array: ");
    scanf("%d",&n1);
    printf("Enter the size of 2st array: ");
    scanf("%d",&n2);
    n3=n1+n2;
    printf("Enter the elements of 1st array:\n");
    for( i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    int k=n1;
    printf("Enter the elements of 2ed array: \n");
    for( i=0; i<n2; i++)
    {
        scanf("%d",arr2[i]);
        arr3[k]=arr3[i];
        k++;
    }
    printf("Enter the elements of 3ed array: \n");
    for(i=0; i<n3; i++)
    {
        printf("%d",arr3[i]);
    }
    printf("Print The elements: \n");
    for(i=0; i<n3; i++)
    {
        printf("%d",arr3[i]);
    }
} 
#include <stdio.h>
int main() {
  int size1, size2, size3;
  int array1[size1], array2[size2], array3[size3];

  printf("\nEnter the size for the first array: ");
  scanf("%d", & size1);
  printf("\nEnter the size for the second array: ");
  scanf("%d", & size2);
  
  size3 = size1 + size2;
  printf("\nEnter the elements in a sorted manner:");
  for (int i = 0; i < size1; i++)
  { 
    scanf("%d", & array1[i]);
    array3[i] = array1[i];
  }
  int k = size1;
  printf("\nEnter the elements in a sorted manner:");
  for (int i = 0; i < size2; i++) 
  {
    scanf("%d", & array2[i]);
    array3[k] = array2[i];
    k++;
  }
  printf("\nmerged array of first and second:\n");
  for (int i = 0; i < size3; i++)
    printf("%d ", array3[i]);

  printf("\nsorted array in descending order\n");
  for (int i = 0; i < size3; i++) 
    {
        int temp;
        for (int j = i + 1; j < size3; j++) 
        {
        if (array3[i] < array3[j]) 
        {
            temp = array3[i];
            array3[i] = array3[j];
            array3[j] = temp;
        }
        }
    }
  for (int i = 0; i < size3; i++) {
    printf(" %d ", array3[i]);
  }
  return 0;
}


// siva koteswara rao