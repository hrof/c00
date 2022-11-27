/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void    ft_put_dig(int n);
void    ft_recursion(int start, int end);
void    ft_put_fixed_part(int start, int end);

void    ft_put_dig(int n)
{
    char a;
    
    a = '0';
    a += n;
    write(1, &a, 1);
}

void    ft_put_fixed_part(int start, int end)
{
    int counter;
    
    counter = start;
    while (counter <= end)
    {
        ft_put_dig(counter);
        counter ++;
    }
}

void    ft_recursion(int start, int end)
{
    int fluid_part;

    if (end < 9)
    {
        fluid_part = end + 1;
        while (fluid_part < 10)
        {
            ft_put_fixed_part(start, end);
            ft_put_dig(fluid_part);
            fluid_part ++;
        write(1, "\n", 1);
        }
        start ++;
        end ++;
        ft_recursion(start, end);
    }
    write(1, "\nexiting function\n", 18);
}

int main()
{
    ft_recursion(0, 5);
    return 0;
}
