#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Interval* merge(struct Interval* intervals, int intervalsSize, int* returnSize);

struct Interval {
    int start;
    int end;
};

int main(void)
{
    struct Interval *intervals = malloc(sizeof(struct Interval) * 2);
    intervals->start = 1;
    intervals->end = 4;
    (intervals + 1)->start = 0;
    (intervals + 1)->end = 4;

    int resize = 0;
	merge(intervals, 2, &resize);
    return 0;
}

struct Interval* merge(struct Interval* intervals, int intervalsSize, int* returnSize) {

    int i = 0, j = 0;
    bool exchange = true;
    for(i = intervalsSize - 1; exchange && i > 1; i--) {
        exchange = false;

        for(j = 0; j < i; j++) {
            if((intervals + j)->start > (intervals + j + 1)->start) {
                int tmpstart = (intervals + j)->start;
                int tmpend = (intervals + j)->end;
                (intervals + j)->start = (intervals + j + 1)->start;
                (intervals + j)->end = (intervals + j + 1)->end;
                (intervals + j + 1)->start = tmpstart;
                (intervals + j + 1)->end = tmpend;
                exchange = true;
            }
        }
    }

    printf("[%d, %d], [%d, %d]", (intervals + j)->start, (intervals + j)->end, (intervals + j + 1)->start, (intervals + j + 1)->end);

    struct Interval *newintervals = malloc(sizeof(struct Interval) * intervalsSize);
    *returnSize = 0;

    for(i = 0; i < intervalsSize; i++) {
        if(*returnSize == 0 || (newintervals + *returnSize - 1)->end < (intervals + i)->start) {
            (newintervals + *returnSize)->start = (intervals + i)->start;
            (newintervals + *returnSize)->end = (intervals + i)->end;
            (*returnSize)++;
        }
        else {
            if((newintervals + *returnSize - 1)->end < (intervals + i)->end) {
                (newintervals + *returnSize - 1)->end = (intervals + i)->end;
            }
        }
    }

    return newintervals;
}
