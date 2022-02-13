#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
  

int main()
{
    cin>>a>>b; //given a >= b
    cout<< "GCD = "<<gcd(a, b);
    return 0;
}
