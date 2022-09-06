#include<stdio.h>
#include<stdlib.h>

int Binary_Search(int result[], int length, int target);

int main(){
    int length;
    printf("Please type the length of unorded array : ");
    scanf("%d", &length);

    int *array = (int*)malloc(length * sizeof(int));
    for(int i = 0; i < length; ++i){
        printf("Please type %dth position real-number for the unorded array : ", i+1);
        scanf("%d", &array[i]);
    }

    int target;
    printf("Please type the target value : ");
    scanf("%d", &target);

    int result = Binary_Search(array, length, target);
    result != -1 ? printf("Success!\nPosition is %d\n", result) : printf("Fail!\n");

    system("PAUSE");
    return 0;
}

int Binary_Search(int result[], int length, int target){
    int lb = 0;
    int ub = length - 1;
    while (lb <= ub){
        int mid = (lb + ub) / 2;
        if (result[mid] == target) return mid;
        else if (result[mid] < target) lb = mid + 1;
        else if (result[mid] > target) ub = mid - 1;
    }

    return -1;
}
