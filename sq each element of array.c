#include<stdio.h>
int main(){
 // n->size of array
 int num,i; scanf("%d",&num); 
 
// array declaration
 int arr[num];
// value assign in each index
 for(i=0;i<num;i++){
 scanf("%d",&arr[i]);
 }
 
 // updating(processing) value after squere each elemnts
 for(i=0;i<num;i++){
 arr[i]=arr[i]*arr[i];
 }
// printing each value of array 
for(i=0;i<num;i++){
printf("%d ", arr[i]);
}
}
