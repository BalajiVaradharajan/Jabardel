
#include <stdio.h>
int cmp(const void *a,const void *b){
    return (*(int*)b)-(*(int*)a);
}
void main()
{
    int number,i,temp,num;
    scanf("%d",&num);
    temp=num;
    scanf("%d",&number);
    int coin[number],denominations;
    for(i=0;i<number;i++){
        scanf("%d",&coin[i]);
    }
    int sum=0;
    qsort(coin,number,sizeof(int),cmp);
    
    for(i=0;i<number;i++){
        int rem=0;
        if(sum==num||num==0){
            break;
        }
        if(num>=coin[i] && coin[i]!=0){
            
            rem=num/coin[i];
            num=num%coin[i];
            }
            if(rem!=0){
                denominations+=rem;
            }
        sum=sum+(rem*coin[i]);
    }
    if(sum==temp){
        printf("%d",denominations);
    }
    else{
        printf("Not possible");
    }
    return 0;
    }
