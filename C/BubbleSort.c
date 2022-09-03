#include<stdio.h>
#include<stdlib.h>

void Bubble_Sort(int result[], int length, char direction);

int main(){
    int length;
    printf("Please type the length of unorded array : ");
    scanf("%d", &length);

    int *unorded_array = (int*)malloc(length * sizeof(int));
    for(int i = 0; i < length; ++i){
        printf("Please type %dth position real-number for the unorded array : ", i+1);
        scanf("%d", &unorded_array[i]);
    }

    printf("Before sorting unorded array\n");
    for(int i = 0; i < length; ++i)
        printf("%d\n", unorded_array[i]);

    // Bubble Sort Algorithm
    Bubble_Sort(unorded_array, length, 'D');

    printf("After DESC sorting unorded array\n");
    for(int i = 0; i < length; ++i)
        printf("%d\n", unorded_array[i]);

    // Bubble Sort Algorithm
    Bubble_Sort(unorded_array, length, 'A');

    printf("After ASC sorting unorded array\n");
    for(int i = 0; i < length; ++i)
        printf("%d\n", unorded_array[i]);

    system("PAUSE");
    return 0;
}

void Bubble_Sort(int result[], int length, char direction){
    switch(direction){
        case 'D':
            for(int i = 0; i < length; ++i){
                for(int j = i+1; j < length; ++j){
                    if(result[i] < result[j]){
                        int temp = result[i];
                        result[i] = result[j];
                        result[j] = temp;
                    }
                }
            }
            break;
        case 'A':
            for(int i = 0; i < length; ++i){
                for(int j = i+1; j < length; ++j){
                    if(result[i] > result[j]){
                        int temp = result[i];
                        result[i] = result[j];
                        result[j] = temp;
                    }
                }
            }
            break;
    }
}
