/*
Program to find sum of ODD numbers Using Range from 1 to n
*/

#include<stdio.h>
int main(){

  int i,start,end,sum=0;

  printf("Enter Start Number= ");
  scanf("%d",&start);

  printf("Enter End Number= ");
  scanf("%d",&end);
  if(start%2==0){
    start++;
  }
  for(i=start;i<=end;i+=2){

     sum += i;
  }
  printf("Sum of Odd Numbers %d to %d = %d",start,end,sum);


return 0;
}
