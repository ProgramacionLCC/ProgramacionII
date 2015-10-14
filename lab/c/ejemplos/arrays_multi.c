#include <stdio.h>

char daytab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
//fin-daytab OMIT

int is_leap(int year)
{
  return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
//fin-is_leap OMIT
 
/* day_of_year: devuelve el dia del año dados año, mes y dia del mes */
int day_of_year(int year, int month, int day)
{
  int i, leap;
  leap = is_leap(year);
  for (i = 1; i < month; i++)
    day += daytab[leap][i];
  
  return day;
}
//fin-day_of_year OMIT

/* month_day: setea pmonth y pday dados año y dia del año */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
  int i, leap;
  leap = is_leap(year);
  for (i = 1; yearday > daytab[leap][i]; i++)
    yearday -= daytab[leap][i];
  
  *pmonth = i;
  *pday = yearday;
}
//fin-month_day OMIT

int main()
{
  printf("%d\n", day_of_year(2015, 10, 13));
  
  int month;
  int day;
  month_day(2015, 35, &month, &day);
  printf("%d %d\n", month, day);  
  
  return 0;  
}