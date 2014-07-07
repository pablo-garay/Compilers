

int factorial(int n)
{
    if(n!=1)
     return n*factorial(n-1);
}


int mult (int x, int y)
{
  return x * y;
}


int main()
{
    int n;
    int vector[10];
    
    
    printf("Enter an positive integer: ");
    n = 3;
    
    factorial(factorial(n));

    
    return 0;
}

