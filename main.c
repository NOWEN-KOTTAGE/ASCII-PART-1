#include<stdio.h>
int main(void)
{
  int i,count1,count2;
  char newArr[20];
  printf("Enter a word ");
  scanf("%s",newArr);
  for(i=0;i<20;i++){
    if(newArr[i]>=65&&newArr[i]<=90){
      count1++;
    }
    else if(newArr[i]>=97&&newArr[i]<=122){
      count2++;
    }
  }
  printf("The number of upercase letters are %d\n",count1);
  printf("The number of lowercase letters are %d",count2);
  return 0;
}