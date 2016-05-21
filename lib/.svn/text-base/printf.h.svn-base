/*
** my.h for my in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Nov 12 09:53:20 2012 benjamin horiot
** Last update Fri Apr 26 11:37:04 2013 benjamin horiot
*/

#ifndef PRINTF_H_
# define PRINTF_H_

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		aff(const char*, va_list, void(*[12])(va_list), char*);
int		settabfct(const char *, va_list(av));
char		*settabflag();
void		my_putchar(char);
void		my_putstroct(char *);
void		my_putnbrs(int);
void		my_putnbrus(unsigned int);
int		my_strlen(char *);
int		*tabfct();
int		my_printf(const char *, ...);
void		octal(char);
void		octalus(unsigned int);
void		bin(unsigned int);
void		hexa(unsigned int, int);
void		fctputnbrs(va_list);
void		fctputnbrus(va_list);
void		fctputchar(va_list);
void		fctputstr(va_list);
void		fctputstroct(va_list);
void		fctscientistlow(va_list);
void		fctscientistup(va_list);
void		fctoctalus(va_list);
void		fctbin(va_list);
void		fcthexalow(va_list);
void		fcthexaup(va_list);
void		fctspace(const char *, int);
void		fctsign(va_list);
void		fctcent(va_list);
void		fctzero(const char *, int);
void		fctmoins(const char *, int);
void		fct0(const char *, int, va_list);
int		spe(const char *, int, char *, void (*[12])(va_list), va_list);
void		fctpoint(va_list);
int		getnbrprint(const char *, int);
int		getsizeint(int , int);
char		*rev(char *);
char		*modif(char *, int);
int		scientist(int, int);
void		my_putstr(char *);
void		overneg();
void		search(const char*, int, va_list, void (*[25])(va_list), char *);
int		*my_sort_int_tab(int *, int);
int		my_getnbr(char *);
void		error(char *);
int		my_strcmp(char *, char *);

#endif /* !PRINTF_H_ */
