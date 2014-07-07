

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
    int vector[3] = {1, 2, 3};
    

    mult(vector[1], vector[2]);

    mult(factorial(vector[1]), factorial(vector[0]));

    factorial(mult(factorial(vector[1]), factorial(vector[0])));
    
    
    return 0;
}

