#include <stdio.h>
int main()
{
    char a[20],b[20],c[20],d[20];
    int i=0,j=0,t=0;
    printf("enter the 1 string:");
    gets(a);
    printf("enter the 2 string:");
    gets(b);
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
     while(b[j]!='\0')
    {
        c[i]=b[j];
        j++;
        i++;
    }
     printf("the string concatenation is ");
     puts(c);
     i=0;
     while(c[i]!='\0')
    {
        i++;
    }
    t=i;
    printf("the string length is %d\n",t);
    printf("the string reverse is : ");
    for(i=t-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    i=0;
    while(c[i]!='\0')
    {
        b[i]=c[i];
        i++;
    }
    b[i]='\0';
    printf("the string copy is ");
    puts(b);
    printf("enter the string to be compared:");
    gets(d);
    i=0;
    while(c[i]!='\0'&&d[i]!='\0')
    {
        if(c[i]!=d[i])
        {
        printf("no\n");
        break;
        }
        else
        {
        i++;
        }
    }
    if(i==t)
    printf("yes\n");
}