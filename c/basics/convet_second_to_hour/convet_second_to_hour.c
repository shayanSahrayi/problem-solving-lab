/**
 * @file convert_seconds_to_hours.c
 * @brief Convert total seconds into hours, minutes, and remaining seconds.
 *
 * Formulas:
 *   hours = totalSeconds / 3600
 *   minutes = (totalSeconds - hours * 3600) / 60
 *   remainingSeconds = (totalSeconds - hours * 3600) % 60
 *
 * Explanation:
 *   Each hour contains 3600 seconds (60 * 60).
 *   Subtract the seconds used by whole hours from the total.
 *   Divide the remaining seconds by 60 to get whole minutes.
 *   Use % 60 to get the seconds left after whole minutes.
 *
 * Example: totalSeconds = 4000
 *   hours = 4000 / 3600 = 1
 *   minutes = (4000 - 1 * 3600) / 60 = 6
 *   remainingSeconds = (4000 - 1 * 3600) % 60 = 40
 *
 * Result: 1 hour, 6 minutes, and 40 seconds.
 */

#include <stdio.h>

int main(void)
{
    int totalSeconds, hours, minutes, remainingSeconds;

    printf("Please enter the total number of seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds - hours * 3600) / 60;
    remainingSeconds = (totalSeconds - hours * 3600) % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Remaining seconds: %d\n", remainingSeconds);

    return 0;
}
