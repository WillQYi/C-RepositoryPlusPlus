#include <cstdio>
#include <iostream>
#include <vector>
// absolute crap solution, made this late at night and was really tired, no
// excuses though, bad solution, bad time complexity, lots of unnecessary
// calculations.
int main() {
  std::freopen("speeding.in", "r", stdin);
  int numberSegments, cowSegments;
  scanf("%d %d", &numberSegments, &cowSegments);
  std::vector<int> segmentPace(100), cowPace(100);
  for (int i = 0; i < numberSegments; i++) {
    int segments, speeds;
    scanf("%d %d", &segments, &speeds);
    for (int i = 0; i < segments; i++) {
      segmentPace[i] = speeds;
    }
  }
  // std::cout << "\n";
  for (int i = 0; i < cowSegments; i++) {
    int segments, cows;
    scanf("%d %d", &segments, &cows);
    for (int i = 0; i < segments; i++) {
      cowPace[i] = cows;
    }
  }
  // std::cout << "\n";
  int maxDiff = 0;
  for (int i = 0; i < 100; i++) {
    int diff = cowPace[i] - segmentPace[i];
    // std::cout << diff << " " << maxDiff << "\n";
    if (diff > maxDiff)
      maxDiff = diff;
  }
  std::cout << maxDiff;
  std::freopen("speeding.out", "w", stdout);
  printf("%d", maxDiff);
}
