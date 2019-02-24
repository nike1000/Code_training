#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int array[], int size);
void print_array(int array[], int size);

int main(void)
{
    int average_case[7] = {28, 13, 9, 69, 57, 41, 24};
    int best_case[7] = {9 ,13, 24, 28, 41, 57, 69};
    int worst_case[7] = {69, 57, 41, 28, 24, 13, 9};

    bubble_sort(average_case, sizeof(average_case) / sizeof(average_case[0]));
    printf("\n\n");
    bubble_sort(best_case, sizeof(best_case) / sizeof(best_case[0]));
    printf("\n\n");
    bubble_sort(worst_case, sizeof(worst_case) / sizeof(worst_case[0]));
    printf("\n\n");
}


void bubble_sort(int array[], int size)
{
    printf("%-10s", "initial");
    print_array(array, size);
    printf("%-8s%-2s%-10s\n", "compare", "|",  "move");
    printf("------------------------------------------------------------\n");

    int last, current, j, compare, move;
    for(last = size - 1; last > 1; last = current)
    {
        printf("%-s%-3d", "last = ", last);

        compare = 0;
        move = 0;
        current = 0;

        for(j = 0; j < last; j++)
        {
            compare++;

            if(array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                move++;
                current = j;
            }
        }

        print_array(array, size);
        printf("%-8d%-2s%-10d\n", compare, "|",  move);
    }
}


void print_array(int array[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("| %-3d", array[i]);
    }

    printf(" | ");
}
