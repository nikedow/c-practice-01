#include <stdio.h>
#define DAYS_PER_YEAR 365
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR 3600
int main(void) {
    int years = 18;
    long days = (long)years * DAYS_PER_YEAR;
    long hours = days * HOURS_PER_DAY;
    long ticks = hours * SECONDS_PER_HOUR;
    printf("Тики: %ld|Часы: %ld|Дни: %ld|Годы: %d\n", ticks, hours, days, years);
    return 0;
}