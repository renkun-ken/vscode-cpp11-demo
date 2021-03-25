#include <cpp11.hpp>
#include <iostream>
using namespace cpp11;

[[cpp11::register]]
double calc_sum(doubles x)
{
  double sum = 0;
  for (int i = 0; i < x.size(); ++i) {
    std::cout << i << std::endl;
    sum += x[i];
  }
  return sum;
}
