
#include <stdio.h>
int main(void){
    int num[9]={65,21,48,32,95,46,512,65,81};
    int i=0,temp =0,j=0;
    for(i=0;i<9;i++){
        temp=num[i];
        j=i;
        for(;j>=0;j--){

            if(num[j]<temp){
                num[j+1]=temp;
                break;
            }
            else{
                num[j]=num[j-1];
            }
            if(j==0){
                num[0]=temp;
                break;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}
