#include <stdio.h>
int main()
{
    int s;
    printf("Enter size of the matrix:");
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(i<s/2){
                if(j==s-1-i || j==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                if(j==s/2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
