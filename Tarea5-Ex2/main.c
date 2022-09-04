#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kgofapples, disconut, Finalprice,price;
    printf("Enter how many kg of apples you will buy: ");
    scanf("%f",&kgofapples);
    price=60;
    if(kgofapples>0)
    {
        if(kgofapples>0 &&kgofapples<2.01)
        {
            Finalprice=kgofapples*price;
        }
        if(kgofapples>2.01 && kgofapples<5.01)
        {
            Finalprice=(kgofapples*price)-(kgofapples*price*0.10);
        }
        if(kgofapples>5.01 && kgofapples<10.1)
        {
            Finalprice=(kgofapples*price)-(kgofapples*price*0.15);
        }
        if(kgofapples>10.01)
        {
        Finalprice=(kgofapples*price)-(kgofapples*price*0.20);
        }
        printf("The final price is: %.2f", Finalprice);
    }else{
        printf("You need to buy some apples");
    }

}
