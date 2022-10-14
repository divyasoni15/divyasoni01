#include<stdio.h>
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,56,4,55,23,58,46,78};
    int size = sizeof(arr)/sizeof(int);
    int element = 55;
    int searchIndex = linearSearch(arr, size, 55);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}