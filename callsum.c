/* calls a sum function written in assembly language. */

   #include <stdio.h>
   #include <inttypes.h>
   double sum(double[], uint64_t);
   int main() {
    double test[] = { 22.8, -16.2, 23.1, -39.2, 40.5, 13.5, 999.9  };
      printf("%30.5f\n", sum(test, 1));
      printf("%30.5f\n", sum(test, 2));
      printf("%30.5f\n", sum(test, 7));
      printf("%30.5f\n", sum(test, 0));
   return 0;
   }