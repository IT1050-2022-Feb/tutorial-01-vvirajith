/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 

int main (void)
{
   int mark1,mark2;
   float average;

  printf("Enter mark1:");
  scanf("%d",&mark1);

  printf("Enter mark2:");
  scanf("%d",&mark2);

  average=(mark1+mark2)/2.0;

  printf("Average:%.2f",average);

  return 0;
}
  
  
 
 #include <stdio.h>

int main()
{
int distance;
float amount;

 printf("Enter the distance:");
scanf("%d",&distance);
  
if(distance<=30)
{
  amount=distance*50;
  printf("Amount:%.2f",amount);
}

else
{
  amount=30*50+(distance-30)*40;
  printf("Amount:%.2f",amount);
}
 
  return 0;
}
 #include <stdio.h>
int main() 
{
  int i,n,sum=0;

  printf("Enter number:");
  scanf("%d",&n);

  for(i=1; i<=n; i++)
    {
      sum=sum+i;
    }
   printf("Sum :%d",sum);
  
  return 0;
}
 #include <stdio.h>

int minimum(int no1,int no2);
int maximum(int no1,int no2);
int multiply(int no1,int no2);


int main() {
   int no1, no2;
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1); 
  
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
  
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
  
   return 0;  
}

int minimum(int no1,int no2)
{
  if(no1>no2)
  {
    return no2;
  }
  else
    return no1;
}

int maximum(int no1,int no2)
{
  if(no1>no2)
  {
    return no1;
  }
  else 
    return no2;
  
}

int multiply(int no1,int no2)
{
  return no1*no2;
}