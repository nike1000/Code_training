#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void bubble_sort(int array[], int size);
void print_array(int array[], int size);

int main(void)
{
    int average_case[7] = {28, 13, 9, 69, 57, 41, 24};
    int best_case[7] = {9 ,13, 24, 28, 41, 57, 69};
    int worst_case[7] = {69, 57, 41, 28, 24, 13, 9};

    printf("Average Case:\n");
    bubble_sort(average_case, sizeof(average_case) / sizeof(average_case[0]));
    printf("\n\nBest Case:\n");
    bubble_sort(best_case, sizeof(best_case) / sizeof(best_case[0]));
    printf("\n\nWorst Case:\n");
    bubble_sort(worst_case, sizeof(worst_case) / sizeof(worst_case[0]));
    printf("\n\n");
}


void bubble_sort(int array[], int size)
{
    printf("%-8s", "initial");
    print_array(array, size);
    printf("%-8s%-2s%-10s\n", "compare", "|",  "move");
    printf("------------------------------------------------------------\n");

    bool exchange = true;

    int i, j, compare, move;
    for(i = size - 1; exchange && i > 0; i--)
    {
        printf("%-s%-3d", "Pass ", size - i);

        compare = 0;
        move = 0;
        exchange = false;

        for(j = 0; j < i; j++)
        {
            compare++;

            if(array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                move++;
                exchange = true;
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
