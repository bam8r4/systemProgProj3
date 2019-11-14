#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] )  
{
int i=argc - 1;
char sl[50];
char sf[50];

strcpy(sl,argv[1]);
strcpy(sf,argv[1]);

while(i>0)
{

printf("%s", argv[i]);
printf(" ");
i--;
}

i++;

while(i<argc)
{

if(strcmp(sl,argv[i])>0)
{
strcpy(sl,argv[i]);
}

if(strcmp("zalex","brent")<0)
{
printf("We are making progress");
}

if(strcmp(sf,argv[i])<0)
{
strcpy(sf,argv[i]);
}
i++;
}
printf("\n");
printf("The first alphabetically is ");
printf(sl);
printf("\n");
printf("The last alphabetically is ");
printf(sf);
printf("\n");
return EXIT_SUCCESS;

}
