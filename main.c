#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int array1[100];
    int array2[100];
    int array3[100];

    int mm = 1;
    int ctr = 0;
    int i,n,j;

    printf("Insert number of elements:\n");
    scanf("%d",&n);

    printf("Insert elements of the array:\n");
    for (i=0;i<n;i++) {
        scanf("%d",&array1[i]);
    }

    for (i=0;i<n;i++) {
        array2[i]=array1[i];
        array3[i]=0;
    }

    for (i=0;i<n;i++) {
       for (j=0;j<n;j++) {
        if (array1[i]==array2[j]) {
                array3[j]=mm;
                mm++;
            } 
       }
       mm=1;
    }


    for (i=0;i<n;i++) {
        if(array3[i]==2) { ctr++; }
    }

     printf("Number of duplicates: %d",ctr);

    return 0;

}