int main()
{
    int number,i,j;
    
    scanf("%d %d",&n, &m );

    int primes[m-n+1];

    
    for(i = n; i<=m; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= number)
    {
        if (primes[i] != 0)
        {
            for(j=n; j<m; j++)
            {
                if (primes[i]*j > m)
                    break;
                else
                   
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }
    return 0;
}
