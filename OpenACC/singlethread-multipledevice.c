# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int main( int argc, const char* argv[] )
/*
  Basic example that shows how you can use OpenACC directives to control multiple devices from a single host thread.
*/

{
  int num_devices = 10;
  
  for(int deviceNum = 0; deviceNum < num_devices; deviceNum++)
    {
      #pragma acc set device_num(deviceNum)
      #pragma acc kernels async // each operation launches asynchronously on a seperate device
      for(int i = 0; i < 10000; i++) {
        // Some big calculation
      }
    }
}
