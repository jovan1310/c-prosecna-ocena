/*
You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades one by one, all of which are integers as well. Finally, your program will calculate and print the average of the grades to two decimal places.
*/
# include <stdio.h>

int main(void)
{
    int prosek = 0;
    int ocena = 0;
    int kolicinaOcena = 0;
    int rezultat = 0;
    scanf("%d", &kolicinaOcena);
    for (kolicinaOcena; kolicinaOcena > 0; kolicinaOcena--)
    {
        /* code */
        scanf("%d", &ocena);
        prosek = prosek + ocena;
        printf("%d\n", prosek);
    }

    rezultat = prosek / kolicinaOcena;
    printf("%d\n", (int)rezultat);
    
    return 0;
}