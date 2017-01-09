#include <stdio.h>

int main(int argc, char**argv)
{
  if (argc <= 4)
  {
      printf("usage: %s <servername> <protocol or portnum> <message>\n", argv[0]);
      printHelp();
  }
}

void printHelp()
{
  printf("N/A");
}
