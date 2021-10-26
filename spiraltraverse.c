#include <stdio.h>
#include <stdlib.h>
int main()
{       int count=0,l=0,i=0,j=0,r,c;
        int cal;
        int **mat;          // 2d matrix declatiion
        printf("Enter row size of table:");
        scanf("%d",&r);
        printf("Enter column size of table:");
        scanf("%d",&c);
        printf("Enter table values:\n");
        cal=r*c;
      //  memory allocation starts here.....
        mat=(int **)calloc(r,sizeof(int *));
            for(int m=0;m<r;m++){
            mat[m]=(int *)calloc(c,sizeof(int));
            }
     // memory allocation ends.......
     // inputing elements....
        for(int m=0;m<r;m++){
            for(int n=0;n<c;n++){
                scanf("%d",&mat[m][n]);
            }
        }
      // inputing ends here......
      // logic starts from here......
        printf("Traversing in spiral form..........\n");
        while(count<cal){
            for(;j<c;j++){
                printf("%d ",mat[i][j]);
                count++;
            }
            j--;
            i++;
            for(;i<r;i++){
                if(count==cal){
                    break;
                }
                printf("%d ",mat[i][j]);
                count++;
            }
            i--;
            for(j=j-1;j>=l;j--){
                if(count==cal){
                    break;
                }
                printf("%d ",mat[i][j]);
                count++;
            }
            j++;
            for(i=i-1;i>l;i--){
                if(count==cal){
                    break;
                }
                printf("%d ",mat[i][j]);
                count++;
            }
            i++;
            j++;
            r-=1;
            c-=1;
            l++;
        }
        // logic ends here.............
        printf("\ntraversing completed...........");
    return 0;
}
