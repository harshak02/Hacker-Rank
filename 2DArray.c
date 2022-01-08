#include<stdio.h> 

int main(){
    int num1;
    int num2;

    printf("Enter the num1 :\n");
    scanf("%d",&num1);

    printf("Enter the num2 :\n");
    scanf("%d",&num2);

    int arr[num1][num2];

    for (int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            arr[i][j] = i+j;
        }
    }

    for (int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
