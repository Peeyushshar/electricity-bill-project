#include<stdio.h>
int main()
{
    int units;
    float total;
    printf("enter the electricity units\n ");
    scanf("%d",&units);
    if(units<=100)
        total=units*1.0;
     if(units>100 && units<=250)


         total=(units-100)*2.0 + units*(1.0);

         if(units>250&&units<=500)
            total=(units-250)*4 + units*1.0+units*2.0;
            if(units>500&&units<=800)
                total=(units-500)*6+units*1.0+units*2.0+units*4.0;
                if(units>800&&units<=1000)
                    total=(units-800)*8+units*1.0+units*2.0+units*4+units*6.0;
                if(units>1000)
            total=(units-1000)*10+units*1.0+units*2.0+units*4+units*6.0+units*8.0;
    printf("the total bill is %.2f",total);
    return 0;




}
