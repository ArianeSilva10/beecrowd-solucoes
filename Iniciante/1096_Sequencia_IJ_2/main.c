#include <stdio.h>

int main(){
    int count_i = 1, i = 1, j = 7;

    while (count_i < 4)
    {
        if (i > 9)
        {
            break;
        }
        
        printf("I=%d ", i);
        printf("J=%d\n", j);
        count_i++;
        if (count_i == 4)
        {
            count_i = 1;
            i = i+2;
            if (j < 5)
            {
                j = j+3;
            }
        }
        j--;
    }
    
}