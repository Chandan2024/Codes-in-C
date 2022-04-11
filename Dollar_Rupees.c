#include <stdio.h>
void main()
{
    float dollar, rupees,choice,rup,dol,rd;
    printf("\t...Welcome to Currency Converter...");
    printf("\nChoose one:");
    printf("\n1.Dollar to Rupees\n2.Rupees to Dollar\n");
    scanf("%f",&choice);
    if(choice==1){
        printf("\nEnter dollars:");
        scanf("%f",&dollar);
        printf("\nEnter one dollar is how much rupees: ");
        scanf("%f",&rup);
        printf("\n%.2f Dollar = %.2f Rupees",dollar,dollar*rup);
    }
      if(choice==2){
        printf("\nEnter Rupees:");
        scanf("%f",&rupees);
        printf("\nEnter how many dollar is one rupees: ");
        scanf("%f",&dol);
        float  rd=rupees/dol;
        printf("\n%.2f Rupees = %.2f Dollar",rupees,rd);
    }
    else{
    printf("\n\t...Thanks For Using...");}
}