#include "main.h"
/**
 * print_remaining_days - picks a date and displays how many
 * days are left
 * @mon: month in number form
 * @day: days of the week/month
 * @yr: year
 * Return: void
 */
void print_remaining_days(int mon, int day, int yr)
{
	if ((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0))
	{
		if (mon >= 3 && day >= 60)
		{
			day++;
		}
		printf("Today's day of the year is: %d\n", day);
		printf("The remaining days are: %d\n", 366 - day);
	}
	else
	{
		if (mon == 2 && day == 60)
		{
			printf("Error!! Invalide date: %02d/%02d/%04d\n", mon, day - 31, yr);
		}
		else
		{
			printf("The day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
