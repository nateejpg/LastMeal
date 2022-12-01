
#include <stdio.h>

int main ()
{

  int T, N;

  char name[10];
  int point;

  scanf("%d %d", &T, &N);

  while (T != 0)
  {

    int all = 0;

    for (int i = 1; i <= T; ++i)
    {
      scanf("%s %d", name, &point);
      all += point;
    }

    printf("%d\n", N*3 - all);

    scanf("%d %d", &T, &N);

  }

}