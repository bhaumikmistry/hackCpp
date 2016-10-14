#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void compare(int arr[],int brr[]){
    int al=0;
    int bo=0;
    for(int i=1;i<4;i++){
        if(arr[i]>brr[i]){
            al += 1;
        }else if(arr[i]<brr[i]){
            bo += 1;
        }else{
            bo +=0;
        }
    }
    printf("%d %d", al,bo);

};

int main(){
    int arr[3] ;
    scanf("%d %d %d",&arr[1],&arr[2],&arr[3]);
    int brr[3];
    scanf("%d %d %d",&brr[1],&brr[2],&brr[3]);
    compare(arr,brr);
    return 0;

}
