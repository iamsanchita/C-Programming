// bubble sorting

#include<stdio.h>
void scanArr(int arr[],int size){
   printf("\n enter your elements of array :");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
}
q
void printArr(int arr[],int size){
   printf("\n your array :");
    for(int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
}

void bubbleSort(int arr[],int size){
   for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main(){
    int size;
    printf("enter arr size :");
    scanf("%d",&size);
    int arr[size];
    scanArr(arr,size);
    printf("\nUnsorted : ");
    printArr(arr,size);
    printf("\nSorted : ");
    bubbleSort(arr,size);
    printArr(arr,size);
    return 0;
}