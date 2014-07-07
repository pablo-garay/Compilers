<?php



 function factorial( $n)
{
    if($n!=1)
      return $n*factorial($n-1);
}


  function mult( $x,  $y)
{
   return  $x* $y;
}


 function main()
{
     $n;
     $vector;
    
    
    printf("Enter an positive integer: ");
     $n= 3;
    
    factorial(factorial($n));

    
     return 0;
}



?>