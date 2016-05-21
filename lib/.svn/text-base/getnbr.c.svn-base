/*
** getnbr.c for getnbr in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Fri Nov 16 11:49:04 2012 benjamin horiot
** Last update Fri Nov 16 12:02:43 2012 benjamin horiot
*/

int	getsizeint(int nbr, int a)
{
  if (nbr != 0)
    {
      a = a + 1;
      return (getsizeint(nbr / 10, a));
    }
  else
    return (a);
}

int	getnbrprint(char *str, int a)
{
  int	b;

  b = 0;
  while (str[a] <= '9' && str[a] >= '0')
    {
      b = b * 10;
      b = b + (str[a] - 48);
      a = a + 1;
    }
  return (b);
}
