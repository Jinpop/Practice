#include <stdio.h>

int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int binary(int arr[], int num, int left, int right){
    if (left > right){
        return -1;
    }

    int mid = left + (right - left)/2;

    if (arr[mid] == num){
        return mid;
    }
    if (arr[mid] > num) {
        return (binary(arr, num, left, mid-1));
    }
    return (binary(arr, num, mid+1, right));
}