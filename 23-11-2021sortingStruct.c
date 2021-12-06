
#include <stdio.h>
#include <string.h>
struct fans
{
    char name[100];
    int co;
};

int main()
{
    int t, m;
    // input total number of fans and max number actress wants to visit
    scanf("%d %d", &t, &m);
    int n = t;

    struct fans f[t];

    for (int i = 0; i < n; i++)
    {
        // name of the fan and fan quotient
        scanf("%s %d", &f[i].name, &f[i].co);
    }

    struct fans temp;
    for (int i = 0; i < t; i++)
    {
        for (int j = i; j < t; j++)
        {
            if (f[i].co < f[j].co)
            {
                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
            if (f[i].co == f[j].co)
            {

                if (strcmp(f[i].name, f[j].name) > 0)
                {
                    temp = f[i];
                    f[i] = f[j];
                    f[j] = temp;
                }
            }
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%s\n", f[i].name);
    }
    return 0;
}
