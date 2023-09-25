#include <iostream>
#include <vector>
std::vector<int> onesim (int bucket2Capac, std::vector<int>& milk, int bucket1, int bucket2){
  int left = bucket2Capac - milk[bucket2]; 
  if (left >= milk[bucket1]){
    milk[bucket2] += milk[bucket1]; 
    milk[bucket1] = 0;
  } else {
    milk[bucket2] = bucket2Capac;
    milk[bucket1] -= left;
  }
  return milk;
}
//No need to use function
//Too many unnecesary varaibls
//Didn't read from file and need learn that
//Solve Date 9/25/2023 4:45 PM - 5:20 PM 
int main() {
  int bucket1Capac = 10, bucket2Capac = 11, bucket3Capac = 12, bucket1 = 3, bucket2 = 4, bucket3 = 5;
  std::vector<int> milkLeft {bucket1, bucket2, bucket3};
  int count = 1, bucket;
  int select = 0;
  while (count <= 100) {
    if (select == 0) bucket = bucket2Capac;
    else if (select == 1) bucket = bucket3Capac;
    else bucket = bucket1Capac;
    onesim(bucket, milkLeft, select, select == 2 ? 0 : select+ 1);
    count++, select == 2 ? select = 0: select++;
    for (auto i : milkLeft) {
      std::cout<< i << " ";
    }
    std::cout <<std::endl;
  }
}