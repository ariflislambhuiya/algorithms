#include<stdio.h>


int main(){
int arr[] = {4,7,5,3,6,2};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}