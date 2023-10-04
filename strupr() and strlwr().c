#include<stdio.h>
int main()
{
    char str[]= "Shahin";

    strupr(str);

    printf("str = %s\n",str);//upper case

    strlwr(str);
    printf("str = %s\n",str); //lower case


}
