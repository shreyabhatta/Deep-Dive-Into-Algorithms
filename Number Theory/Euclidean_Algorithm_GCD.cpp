#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
  

int main()
{
    int a = 112, b = 77;
    cout<< "GCD = "<<gcd(a, b);
    return 0;
}