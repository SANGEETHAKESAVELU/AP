#include <stdio.h>
int main(void)
{
    int start,diff,no_of_times,i;
    printf("\n enter how many times should be executed N :");
    scanf("%d",&no_of_times);
    printf("\nenter difference between the number D :");
    scanf("%d",&diff);
    printf("\nenter the initial number S :");
    scanf("%d",&start);
    for(i=0;i<no_of_times;i++)
    {
        printf("%d\t",start);
        start=start+diff;
        
    }
	return 0;
}
