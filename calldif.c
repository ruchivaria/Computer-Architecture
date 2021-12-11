/* calls a dif function written in assembly language. */

   #include <stdio.h>
   #include <inttypes.h>
   double dif(double[], uint64_t);
   int main() {
    double test[] = { 22.8, -16.2, 23.1, -39.2, 40.5, 13.5, 999.9 };
      printf("%30.5f\n", dif(test, 2));
      printf("%30.5f\n", dif(test, 5));
      printf("%30.5f\n", dif(test, 3));
      printf("%30.5f\n", dif(test, 1));
   return 0;
   }