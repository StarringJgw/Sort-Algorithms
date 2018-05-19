
#include <stdio.h>
#define SIZE 8
int putMax(int *num,int i,int last){

    int temp=0;
    if(2*i+1>last){
        if(num[i]>=num[2*i])
            return 0;
        else{
            temp=num[i],num[i]=num[2*i],num[2*i]=temp;
            return 1;
        }
    }
    else{
        if(num[2*i]>num[2*i+1]){
            if(num[i]>=num[2*i])
                return 0;
            else{
                temp=num[i],num[i]=num[2*i],num[2*i]=temp;
                return 1;
            }
        }
        else{
            if(num[i]>=num[2*i+1])
                return 0;
            else{
                temp=num[i],num[i]=num[2*i+1],num[2*i+1]=temp;
                return 1;
            }
        }
    }
}
void initialize(int num[],int last)
{
    int i=0;
    int lastParent=last/2;
    int flag=1;
    for(;flag>0;)
    {
        flag=0;
        for(i=lastParent;i>=0;i--){
        flag=flag+putMax(num,i,last);
        }
    }

}
int main(void){
    int num[SIZE]={8,1,6,5,3,7,4,9,2},i,temp;
    for(i=SIZE-1;i>0;i--){
        initialize(num,i);
        temp=num[i],num[i]=num[0],num[0]=temp;
    }

    for(i=0;i<SIZE;i++){
        printf("%d\t",num[i]);
    }
    return 0;
}
