
#include<stdio.h>
 int main()
 {
  int arr_size;
  scanf("%d \n", &arr_size);
  int arr[arr_size];
  for(int index = 0; index <= arr_size - 1; index++)
   {
    scanf("%d",&arr[index]);
   }
  int search_elem;
  printf("Enter the element to be searched: ");
  scanf("%d", &search_elem);
  int is_matched = 0;
  
  for(int index = 0; index <= arr_size - 1; index++)
   {
     if(search_elem == arr[index])
       {
         is_matched = 1;
         break;
       }
   }

  if(is_matched == 1)
    printf("Found");
  else
    printf("Not Found");
﻿  return 0;
 }