#include <stdio.h>
#include <stdlib.h>

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

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();

    int *a = (int*)malloc(sizeof(int)*n);
    int *b = (int*)malloc(sizeof(int)*m);
    
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        count++;
    }

    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        count++;
    }

    qsort(a, n, sizeof(int), compare);

    for(int i = 0; i < m; i++){
        if (binary(a, b[i], 0, n) != -1){
            count-=2;
        }
    }

    printf("%d", count);

    free(a);
    free(b);

    return 0;
}