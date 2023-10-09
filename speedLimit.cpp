#include <cstdio>
#include <iostream>
#include <vector>

int main() {
  std::freopen("speeding.in", "r", stdin);
  int numberSegments, cowSegments;
  scanf("%d %d", &numberSegments, &cowSegments);
  std::vector<int> segmentPace, cowPace;
  for (int i = 0; i < numberSegments; i++) {
    int segments, speeds;
    scanf("%d %d", &segments, &speeds);
    for (int i = 0; i < segments; i++) {
      segmentPace.push_back(speeds);
      std::cout << segmentPace[i] << " ";
    }
  }
  std::cout << "\n" << "\n";
  for (int i = 0; i < cowSegments; i++) {
    int segments, cows;
    scanf("%d %d", &segments, &cows);
    for (int i = 0; i < segments; i++) {
      cowPace.push_back(cows);
      std::cout << cowPace[i] << " ";
    }
  }
  std::cout << "\n";
  int maxDiff = 0;
  for (int i = 0; i < 100; i++) {
    int diff = cowPace[i] - segmentPace[i];
    std::cout << cowPace[i] << " " << segmentPace[i] << " "<< diff << " " << maxDiff << "\n";
    if (diff > maxDiff)
      maxDiff = diff;
  }
  std::freopen("speeding.out", "w", stdout);
  printf("%d", maxDiff);
}
