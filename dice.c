#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIDES 6
#define R_SIDE (rand() % SIDES + 1)

int main(void)
{
  int j;
  int trials;
  int n_dice;
  int d1;
  double outcomes[100];

  srand(clock()); // seed
  n_dice = 1;
  printf("\nEnter number of trials: ");
  scanf("%d", &trials);
  for (j = 0; j < trials; ++j)
    outcomes[(d1 = R_SIDE)]++;
  printf("probability\n");
  for (j = 1; j < n_dice * SIDES + 1; j++)
    printf("j = %d p %lf\n", j, (double)(outcomes[j]/trials));
  return (0);
}
