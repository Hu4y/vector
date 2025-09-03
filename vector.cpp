#include <iostream>
#include <vector>

int main() {
   int n, q;
   std::cin >> n >> q;

   std::vector<std::vector<int>> vec(n);

   for(int i = 0; i < n; i++) {
      int k;
      std::cin >> k;
      vec[i].resize(k);
      for(int j = 0; j < k; j++) {
         std::cin >> vec[i][j];
      }
   }
   for(int t = 0; t < q; t++) {
      int a, b;
      std::cin >> a >> b;
      std::cout << vec[a][b] << std::endl;
      }
}