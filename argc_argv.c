#include <stdio.h>
//argc number of arguments, *argv-pointer counters the strings.

int main(int argc, char  *argv[])
{   
      int i;

      printf("argc = %d\n", argc);

      for(i=0;i<argc;i++){
            
	    printf("argv[%d] = %s\n", i, argv[i]);
      }      
      return 0;
}
