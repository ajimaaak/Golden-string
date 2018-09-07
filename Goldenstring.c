
#include <stdio.h>
#include<string.h>
int main()
{
    int t,i=0,j=0,count1=0,count2=0,temp;
    char str[10][10];
    scanf("%d",&t);
    temp=t;
    while(t)
    {
        scanf("%s",str[i]);
        i++;
        t--;
    }
    
//    printf("%s %s",str[0],str[1]);
i=0;
t=temp;
while(t)
{
  //printf("%d %d",count1,count2);
    for(j=0;j<strlen(str[i]);j++)
    {
        if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
        {
         count1++;
        }
        else
        count2++;
    }
    
    if(count1==count2)
    {
        printf("%s\n",str[i]);
        printf("yes");
    }
    else
        {
            printf("\n%s\n",str[i]);
            printf("No");
        }
    i++;
    count1=0;
    count2=0;
    t--;
}
    return 0;
}
