#include <stdio.h>
#include <stdlib.h>
int main()
{   int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int size;
        int max[2];
        scanf("%d",&size);
        int *arr=calloc(size,sizeof(int));
        for(int k=0;k<size;k++){
            scanf("%d",&arr[k]);
        }
        int even[2]={0,0};
        int odd[2]={0,0};
        for(int j=0;j<size;j++){
            if(j%2==0){
                odd[0]+=arr[j];
            }
            else{
                even[0]+=arr[j];
            }
            if(arr[j]%2==1){
                odd[1]+=arr[j];
            }
            else{
                even[1]+=arr[j];
            }
        }
    if(even[0]>odd[0]){
        max[0]=even[0];
    }
    else{
        max[0]=odd[0];
    }
    if(even[1]>odd[1]){
        max[1]=even[1];
    }
    else{
        max[1]=odd[1];
    }
    printf("Test Case #%d : %d %d",i,max[0],max[1]);
    }

    return 0;
}
