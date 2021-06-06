#include "problem_a.hpp"
#include <iostream.h>

int *multiply_by_two(int &n)
{
  n *= 2;
  return &n;
}

std::string the_third_and_fifth(char *ptr)
{
  std::string out;
  out += *(ptr+sizeof(char)*2);
  out += *(ptr+sizeof(char)*4);
  return out;
}

int my_own_strlen(char *ptr)
{ 
  int len = 0;
  char temp = *ptr;
  while(temp != '\0'){
    len++;
    temp = *(ptr + len*sizeof(char));
  }
  return len;
}

void element_swapper(int *ptr1, int *ptr2, int n)
{
  int &int1 = *(ptr1 + n);
  int &int2 = *(ptr2 + n);
  int temp = int1;
  int1 = int2;
  int2 = temp;
}
