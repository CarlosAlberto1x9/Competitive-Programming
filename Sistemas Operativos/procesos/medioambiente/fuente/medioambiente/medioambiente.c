#include "imprimeambiente.h"

int main(int argc, char** argv, char** envp)
{
   while (*envp!=NULL)
      printf("%s\n",*envp++);
   return(0);
}
