
//// Author  Rybochkin Aleksei
//// My neuronet
//// Compiled in GCC in Windows 10  x64


#include <stdio.h>
#include <stdlib.h>

///////////////////////*************** Global Variable
    int z = 0;
    int x = 0;
    int c = 0;
    int v = 0;
    int b = 0;
    int n = 0;

    FILE *getfrom;  // take from file

    FILE *getto;  // save to file

    int starting[]; // first layer on neuronet
    int ending[];  // finsh of neuronet

    int a1[] = {1, 2, 3, 4, 5};  // 1 inner layer
    int a2[] = {1, 2, 3, 4, 5};  // 2 inner layer
    int a3[] = {1, 2, 3, 4, 5};  // 3 inner layer
    int a4[] = {1, 2, 3, 4, 5};  // 4 inner layer
    int a5[] = {1, 2, 3, 4, 5};  // 5 inner layer


    char example[] = {'e', 'x', 'a', 'm', 'p', 'l', 'e', '\n'};

    char finishe[] = {'f', 'i', 'n', 'i', 's', 'h', 'e', '\n'};


///////////////////////*************** HELP
void help(void)
{
  printf(" This is neuronet for education  \n");


}



int aa1()
{
  printf(" func aa1 \n");

  example[1] = b;

  printf(" %i \n", example[1]);

  return 0;
}



int aa2()
{
  printf(" func aa2 \n");


  return 0;
}

int aa3()
{
  printf(" func aa3 \n");


  return 0;
}

int aa4()
{
  printf(" func aa4 \n");


  return 0;
}

int aa5()
{
  printf(" func aa5 \n");


  return 0;
}



///////////////////////***************


///////////////////////*************** MAIN
int main(int argc, char* argv[])
{
   printf(" Neuronet  by Rybochkin A. L. \n");
   printf("\n");

//



////// HERE THE PLACE OF FUNCTIONS

int aa1();

int aa2();

int aa3();

int aa4();

int aa5();

////// HERE THE END OF PLACE OF FUNCTIONS



///////// HERE THE PLACE OF CLOSE ALL FILES



printf(" End of jon Neuronet ... \n");
getchar();
}
///////////////////////*************** END MAIN












