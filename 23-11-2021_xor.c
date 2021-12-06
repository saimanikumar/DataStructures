#include <stdio.h>
int main()
{
     int t,c = 0;
   
    scanf("%d",&t);
  int a[t];
   
  
    for(int i = 0; i< t; i++)
    {
    
        scanf("%d",&a[i]);
    }
    
    for(int i = 0; i< t; i++)
    {
        for (int j = i+1; j<t; j++)
        {
            if(a[i] == a[j])
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
    return 0;
}
