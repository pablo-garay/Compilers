//#include <stdio.h>

int main(){
      float a, b, c;
		
      a = 123123.0;
	  b = 132132.0;
	  c = 133231.0;

      if (a>=b)
      {
          if(a>=c)
            printf("Largest number = %.2f",a);
          else
            printf("Largest number = %.2f",c);
      }
      else
      {
          if(b>=c)
            printf("Largest number = %.2f",b);
          else
            printf("Largest number = %.2f",c);
      }
      return 0;
}
