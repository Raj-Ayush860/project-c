#include <stdio.h>

int main() {
  int n = 25;
  int marks[n], birthMonth[n], revisedMarks[n];
  int sumOriginal = 0, sumRevised = 0;
  float avgOriginal, avgRevised;

  // Get original marks and birth month
  printf("Enter the original marks and birth month of %d students:\n", n);
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &marks[i], &birthMonth[i]);
  }

  // Calculate revised marks and find sum for both original and revised marks
  for(int i = 0; i < n; i++) {
    revisedMarks[i] = marks[i] + birthMonth[i];
    sumOriginal += marks[i];
    sumRevised += revisedMarks[i];
  }

  // Find averages for both original and revised marks
  avgOriginal = (float) sumOriginal / n;
  avgRevised = (float) sumRevised / n;

  // Decide whether to implement the revision or not
  if(avgRevised - avgOriginal >= 5) {
    printf("Can implement - Significant increase in class average\n");
  } else {
    printf("Need not implement - No significant increase in class average\n");
  }

  // Display class averages for both original and revised marks
  printf("Class average for original marks: %.2f\n", avgOriginal);
  printf("Class average for revised marks: %.2f\n", avgRevised);

  return 0;
}
