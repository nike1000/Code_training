#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int array[], int size);
void print_array(int array[], int size);

int main(void)
{
    int average_case[7] = {28, 13, 41, 69, 9, 24, 57};
    int best_case[7] = {9, 13, 24, 28, 41, 57, 69};
    int worst_case[7] = {69, 57, 41, 28, 24, 13, 9};

    printf("Average Case:\n");
    insertion_sort(average_case, sizeof(average_case) / sizeof(average_case[0]));
    printf("\n\nBest Case:\n");
    insertion_sort(best_case, sizeof(best_case) / sizeof(best_case[0]));
    printf("\n\nWorst Cast:\n");
    insertion_sort(worst_case, sizeof(worst_case) / sizeof(worst_case[0]));
    printf("\n\n");
}


void insertion_sort(int array[], int size)
{

    printf("%-8s", "initial");
    print_array(array, size);
    printf("%-8s%-2s%-10s\n", "compare", "|",  "move");
    printf("------------------------------------------------------------\n");

    int i, j, compare, move;
    for(i = 1; i < size; i++)
    {
        printf("%-s%-4d", "i = ", array[i]);
        compare = 0;
        move = 0;

        for(j = i; j > 0; j--)
        {
            compare++;

            if(array[j - 1] > array[j])
            {
                int tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1]= tmp;
                move++;
            }
            else
            {
                break;
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
