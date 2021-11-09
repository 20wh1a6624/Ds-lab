#include<stdio.h>
   int linearSearch(int a[],int,int);
   int main(){
   int a[30],i,n,p;
   int key;
   printf("enter value of n");
   scanf("%d",&n);
   printf("enter n + 1  array values");
   for(i = 0;i <= n;i++){
      scanf("%d",&a[i]);
  }
  printf("enter element to be searched \n");
  scanf("%d",&key);
  p = linearSearch(a,n,key);
  if(p == -1){
      printf("element not found");
      }
  else{
      printf("element found at %d",p + 1);
  }
  }
  int linearSearch(int a[],int n,int key){
      int i;
      for(i = 0;i <= n;i++){
      if( a[i] == key){
             return i;
              }
          }
          return -1;
     }
  
  /* output
   1 . n = 2
       array elements = [1,2,4]
       key = 2
       output: element found at 2
 
 */


