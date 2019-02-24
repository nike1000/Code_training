#include<stdio.h>
#include<stdlib.h>

int find_min(int array[], int lidx, int ridx, int *comparePtr);
void selection_sort(int array[], int size);
void print_array(int array[], int size);

int main(void)
{
    int average_case[7] = {28, 13, 41, 69, 9, 24, 57};
    int best_case[7] = {9, 13, 24, 28, 41, 57, 69};
    int worst_case[7] = {69, 57, 41, 28, 24, 13, 9};

    printf("Average Case:\n");
    selection_sort(average_case, sizeof(average_case) / sizeof(average_case[0]));
    printf("\n\nBest Case:\n");
    selection_sort(best_case, sizeof(best_case) / sizeof(best_case[0]));
    printf("\n\nWorst Cast:\n");
    selection_sort(worst_case, sizeof(worst_case) / sizeof(worst_case[0]));
    printf("\n\n");
}


void selection_sort(int array[], int size)
{
    printf("%-8s", "initial");
    print_array(array, size);
    printf("%-8s%-2s%-10s\n", "compare", "|",  "move");
    printf("------------------------------------------------------------\n");

    int i, min_idx, compare, move;

    for(i = 0; i < size - 1; i++)
    {
        printf("%-s%-3d", "Pass ", i + 1);

        compare = 0;
        move = 0;

        min_idx = find_min(array, i, size - 1, &compare);

        int tmp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = tmp;
        move++;

        print_array(array, size);
        printf("%-8d%-2s%-10d\n", compare, "|",  move);
    }
}


int find_min(int array[], int lidx, int ridx, int *comparePtr)
{
    int i, min_idx = lidx;
    for(i = lidx + 1; i <= ridx; i++)
    {
        (*comparePtr)++;
        if(array[i] < array[min_idx])
        {
            min_idx = i;
        }
    }

    return min_idx;
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
