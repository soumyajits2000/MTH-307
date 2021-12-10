//Brushing up C ckills
#include <stdio.h>
main ()
{
    char name[100];
    char institute[100];
    char gen[50];
    int reg;
    int batch;
    printf ("Name: \n");
    scanf("%s",&name);
    printf("Name of your institution: \n");
    scanf("%s",&institute);
    printf("Batch:\n");
    scanf("%d",&batch);
    printf("Registeration Number:\n");
    scanf("%d",&reg);
    printf("Gender (M/F):\n");
    scanf("%s",&gen);
    switch (gen)
    {
        case 'M':
        printf("him");
        break;

        case 'F':
        printf("her");
        break;

        default:
        printf("them");
        break;
    }
    printf("\n-----------------------------------------------------------------\n");
    printf("\nDetails of the student (summary)\n");
    printf("\n-----------------------------------------------------------------\n");
    printf("%s is a student of %d th batch of %s . %d is the insitutional registeration number of %s.\n",name, batch, institute, reg, gen);
    

}