#include<stdio.h> 

int main(){
    int num;

    int arr[num];

    printf("Enter the num :\n");
    scanf("%d",&num);


    for (int i =0;i<num;i++){
        arr[i] = i+1;
    }

    for (int i =0;i<num;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
