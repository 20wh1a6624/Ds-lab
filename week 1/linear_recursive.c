#include<stdio.h>
int linearsearch(int a[], int n, int ele){
    if(n >= 0){
         if(a[n - 1] == ele){
             return n - 1;
             }
         else{
    
             return  linearsearch(a,n - 1,ele);
        }
    return -1;
}
int main(){
    int n,a[50],pos,ele,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    printf("Element to be searched: ");
    scanf("%d", &ele);
    pos = linearsearch(a,n,ele);
    if(pos == -1){
        printf("Element not found");}
    else{
        printf("Element found at %d postion",pos + 1);}
}
/*output 
n = 2
array elements = [1,2,3]
ele = 5
output: element not found
*/
