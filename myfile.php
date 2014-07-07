<?php



 function factorial( $n)
{
    if($n!=1)
      return $n*factorial($n-1);
}

 function main()
{
     $n;
    printf("Enter an positive integer: ");
    scanf("%d",&$n);
    factorial(factorial($n));
     return 0;
}



?>