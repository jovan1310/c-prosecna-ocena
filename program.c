/*
You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades one by one, all of which are integers as well. Finally, your program will calculate and print the average of the grades to two decimal places.
*/
# include <stdio.h>

int main(void)
{
    int prosek = 0;
    int ocena;
    int kolicinaOcena;
    int i;
    double rezultat;

    scanf("%d", &i);
    
    for (kolicinaOcena = i; kolicinaOcena > 0; kolicinaOcena--)
    {
        /* code */
        scanf("%d", &ocena);
        prosek = prosek + ocena;
        printf("%d\n", prosek);
    }
    rezultat =  (double)prosek / (double)i;
    
    printf("%lf\n", rezultat);
    
    return 0;
}