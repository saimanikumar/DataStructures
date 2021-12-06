#include<stdio.h>
int main()
{
    int a[3],b[3];
    int ans[2];
    for(int i = 0;i < 3; i++)
    scanf("%d",&a[i]);
    for(int i = 0;i < 3; i++)
    scanf("%d",&b[i]);
    ans[0] = 0;
    ans[1] = 0;
    for(int i = 0; i < 3; i++){
        if( a[i] > b[i])
        {
            ans[0]++;
        }
        else if (a[i] < b[i]){
            ans[1]++;
        }
    }
        printf("%d %d",ans[0],ans[1]);
    
    return 0;
}
