#include <iostream>
#include <cmath>
int main() {
  float res = 1;
  for(int y=res * 9; y >= res * -9; y--) {
    for(int x=res * -9; x <= res* 9; x++) {
      if (x==0 && y!=0) std::cout<< "| ";
      else if (x==0 && y==0) std::cout<< "|";
      else if (y==0) std::cout<< "--";

      else if(y == abs(x)  ) {

        if (y== x) std::cout<<"⋰ ";
        else if (y==-x) std::cout<< "⋱ ";
        else if (true) std::cout<<"X ";
      }
      else std::cout<< "  ";
      //else std::cout<< " ";
    }
    std::cout<< "\n";
  }

 /* std::cout << 100 << '\n';
  std::cout.width(10);
  std::cout << 100 << '\n';
  std::cout.fill('x');
  std::cout.width(15);
  std::cout << std::left << 100 << '\n'; */

}