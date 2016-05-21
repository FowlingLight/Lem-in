/*
** printf.c for printf in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Nov  8 13:27:03 2012 benjamin horiot
** Last update Fri Apr 26 11:05:46 2013 benjamin horiot
*/

#include "printf.h"

int		settabfct(const char *format, va_list av)
{
  void		(*tab[25])(va_list);
  char		*tabflag;

  tab[0] = &fctputnbrs;
  tab[1] = &fctputnbrs;
  tab[2] = &fctputnbrus;
  tab[3] = &fctputchar;
  tab[4] = &fctputstr;
  tab[5] = &fctputstroct;
  tab[6] = &fctscientistlow;
  tab[7] = &fctscientistlow;
  tab[8] = &fctscientistup;
  tab[9] = &fctscientistup;
  tab[10] = &fctoctalus;
  tab[11] = &fctbin;
  tab[12] = &fcthexalow;
  tab[13] = &fcthexaup;
  tab[14] = &fctpoint;
  tab[15] = &fctcent;
  tab[16] = &fctsign;
  tabflag = settabflag();
  return (aff(format, av, tab, tabflag));
}

char		*settabflag()
{
  char		*tabflag;

  tabflag = malloc(sizeof(25));
  tabflag[0] = 'd';
  tabflag[1] = 'i';
  tabflag[2] = 'u';
  tabflag[3] = 'c';
  tabflag[4] = 's';
  tabflag[5] = 'S';
  tabflag[6] = 'e';
  tabflag[7] = 'g';
  tabflag[8] = 'E';
  tabflag[9] = 'G';
  tabflag[10] = 'o';
  tabflag[11] = 'b';
  tabflag[12] = 'x';
  tabflag[13] = 'X';
  tabflag[14] = 1;
  tabflag[15] = '%';
  tabflag[16] = '+';
  tabflag[17] = '0';
  tabflag[18] = 1;
  tabflag[19] = ' ';
  tabflag[20] = '#';
  return (tabflag);
}

int		aff(const char *format, va_list av, void (*tabfct[25])(va_list),
		    char *tabflag)
{
  int		a;

  a = 0;
  while (format[a] != 0)
    {
      if (format[a] == '%' && format[a + 1] != '%')
	{
	  a = a + 1;
	  if (spe(format, a, tabflag, tabfct, av) == 1)
	    a = a + 1;
	  search(format, a, av, tabfct, tabflag);
	}
      else if (format[a] == '%' && format[a + 1] == '%')
	{
	  my_putchar('%');
	  a = a + 1;
	}
      else
	my_putchar(format[a]);
      a = a + 1;
    }
  free(tabflag);
  return (a);
}

int		spe(const char *format, int a, char *tabflag,
		    void (*tabfct[25])(va_list), va_list av)
{
  int		b;

  b = 15;
  while (format[a] != tabflag[b] && tabflag[b] != 0)
    b = b + 1;
  if (tabflag[b] == 0)
    return (0);
  if (b == 17)
    fct0(format, a, av);
  else if (b == 18)
    fctmoins(format, a);
  else if (b == 19)
    fctspace(format, a);
  else if (b == 20)
    fctzero(format, a);
  else
    tabfct[b](av);
  return (1);
}

int		my_printf(const char *format, ...)
{
  va_list	av;
  int		a;

  va_start(av, format);
  a = settabfct(format, av);
  va_end(av);
  return (a);
}
