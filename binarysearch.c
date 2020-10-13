//c program to perform binary search
#include <stdio.h>
void main(){
int ar[5]={10,20,30,40,50};
int mid,low=0,high=4,key,flag=0;

  printf("Enter the key value to search\n");
  scanf("%d",&key);
  while (low<=high) {
    mid=(low+high)/2;
    if (key==ar[mid]){
      flag=1;
      break;
    }
    else if(key<ar[mid]){
      high=mid-1;
    }
    else {
      low=mid+1;
    }

  }
  if (flag==1){
    printf("element found in the list");

  }
  else{
    printf("element not found");
  }
}
