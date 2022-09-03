#include<stdio.h>
#include<stdlib.h>

int Linear_Search(int result[], int length, int target);

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

    int result = Linear_Search(array, length, target);
    result != -1 ? printf("Success!\n") : printf("Fail!\n");

    system("PAUSE");
    return 0;
}

int Linear_Search(int result[], int length, int target){
    for(int i = 0; i < length; ++i){
        if(result[i] == target){
            return i;
        }
    }

    return -1;
}
