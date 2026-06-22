#include <stdio.h>
int main()
{
    float j = 0;
    for (float i = 0; i <= 2; i += 0.2)
    {
        for (int count = 1; count <= 3; count++)
        {
            j = count + i;
            if (i == (int)i)
            {
                    printf("I=%.0f J=%.0f\n", i, j);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j);
            }
            
            
        }
    }
}