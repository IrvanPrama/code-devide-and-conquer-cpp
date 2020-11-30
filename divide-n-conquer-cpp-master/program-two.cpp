#include <cstdlib>
#include <iostream>
using namespace std;

double exp2(double a, int n) {
  double x;
  if(n == 0) {
    return 1;
  }
  else {
    x = exp2(a,(n / 2));
    if(n % 2 == 1) {
     return x * x * a;
    }
  }
}
int main(int argc, char *argv[]) {
  double a;
  int n;
  cout<<"masukkan basis:\n";
  cin>>a;
  cout<<"masukkan exponen:\n";
  cin>>n;
  cout<<"hasil "<<a<<" pangkat "<<n<<" = "<<exp2(a,n)<<endl;
  cout<<endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}
