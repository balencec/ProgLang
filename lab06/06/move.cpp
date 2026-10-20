#include <iostream>
#include <string>
#include <chrono>
#include <utility>
int main() {
   auto start = std::chrono::steady_clock::now();

   std::string a(100000, 'a');
   std::string b(100000, 'b');
   for (int i=0;i<1000000;i++) {
      std::string c(std::move(a));
      a = std::move(b);
      b = std::move(c);
   }
   std::cout << a[0] << b[0] << std::endl;

   auto end = std::chrono::steady_clock::now();
   std::cout << "Time: "
             << std::chrono::duration<double>(end - start).count()
             << " s" << std::endl;
   return 0;
}
