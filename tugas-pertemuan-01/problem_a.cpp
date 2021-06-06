#include "problem_a.hpp"
#include <iostream.h>

bool is_prime(int n)
{
  if(n <= 1) return false;
  for(int i = 2;i < n;i++){
    if(n % i == 0) return false;
  }
  return true;
}

unsigned int factorial(unsigned int n)
{
  if(n == 0) return 1;
  return n * factorial(n-1);
}

template<typename T>
void swap(T &a, T &b){
  T temp = a;
  a = b;
  b = temp;
}

void inplace_sort(size_t n, int arr[])
{
  for(int x = 0;x < n;x++)
  for(int i = 0;i < n;i++)
  for(int j = 0;j < n;j++){
    if(arr[i] < arr[j]){
      swap(arr[j],arr[i]);
      break;
    }
  }
}


void inplace_reverse_str(std::string &str)
{
  int right = str.size() - 1;
  int left = 0;
  while(left < right) swap(str[right--],str[left++]);
}

std::string reverse_str(const std::string &str)
{
  std::string reversed = str;
  inplace_reverse_str(reversed);
  return reversed;
}
