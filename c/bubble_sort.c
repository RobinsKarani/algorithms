#include <stdio.h>

void sort(char array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        for (int j = 0; j < array_size - i - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char array[7] = {'A', 'B', 'D', 'E', 'G', 'C', 'F'};
    int array_size = sizeof(array) / sizeof(array[0]);

    sort(array, array_size);

    for (int i = 0; i < array_size; i++)
    {
        printf(" %c", array[i]);
    }
}