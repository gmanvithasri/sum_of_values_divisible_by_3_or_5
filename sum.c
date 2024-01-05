int main()
{
    int i;
    int num,sum=0;
    
    printf("Enter num:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d can be divided by both 3 and 5\n",i);
            sum=sum+i;
        }
    }
    printf("Sum=%d\n",sum);

    return 0;
}
