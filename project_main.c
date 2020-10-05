#include <insurance_management.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int insurance_operation = 0;

/* Operands on which calculation is performed */
char insurance_op1 = 0;
char insurance_op2[];
char insurance_op4[];
int insurance_op3 = 0;
/* Valid operations */
enum operations{ CHOICE=1, USERNAME, PASSWORD, GENDER, AGE, PHONENUMBER, VEHICLETYPE, LINCENSENUMBER, ENGINENUMBER, PAY_PA, LOGIN, CLAIM, EXIT };

/* Display the menu of operations supported */
void insurance_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****insurance_management****\n");
    while(1)
    {
        insurance_menu();
    }
}

void insurance_menu(void)
{
    printf("\nSteps\n");
    printf("\n1. choice\n2. username\n3. password\n4. gender\n5. age\n6. phonenumber\n7. vehicletype\n8. lincensenumber\n9. enginenumber\n10. pay_pa\n11. login\n12. claim\n31.  Exit");
  
   
     __fpurge(stdin);
    scanf("%d", &insurance_operation);

    if(EXIT == insurance_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(insurance_operation))
    {
        printf("\n\tEnter the information with space between them\n");
        __fpurge(stdin);
        scanf("%c %s %s %d", &insurance_op1, &insurance_op2, &insurance_op4, &insurance_op3);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(insurance_operation)
    {
        case CHOICE:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            insurance_op1, 
            choice(insurance_op1));
            
            __fpurge(stdin);
            getchar();
            break;
        case USERNAME:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            insurance_op2[],
            username(insurance_op2[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case PASSWORD:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            insurance_op2[], 
            password(insurance_op2[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case GENDER:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            insurance_op1, 
            gender(insurance_op1));
            
            __fpurge(stdin);
            getchar();
            break;
        case AGE:
            printf("\n\t Greater %d and %d = %d\nEnter to continue", 
            insurance_op3, 
            age(insurance_op3));
            
            __fpurge(stdin);
            getchar();
            break;
        case PHONENUMBER:
            printf("\n\t Primenum %d =%d\nEnter to continue", 
            insurance_op2[], 
            phonenumber(insurance_op2[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case VEHICLETYPE:
            printf("\n\t Primenum1 %d =%d\nEnter to continue", 
            insurance_op1, 
            vehicletype(insurance_op1));
            
            __fpurge(stdin);
            getchar();
            break;
          case LICENSENUMBER:
            printf("\n\t evenodd %d =%d\nEnter to continue", 
            insurance_op2[], 
            licensenumber(insurance_op2[]));
            
            __fpurge(stdin);
            getchar();
            break;
          case ENGINENUMBER:
            printf("\n\t evenodd1 %d =%d\nEnter to continue", 
            insurance_op2[], 
            enginenumber(insurance_op2[]));
            
            __fpurge(stdin);
            getchar();
            break;
          case PAY_PA:
            printf("\n\t posneg %d =%d\nEnter to continue", 
            insurance_op3, 
            pay_pa(insurance_op3));
            
            __fpurge(stdin);
            getchar();
            break;
        case LOGIN:
            printf("\n\t posneg1 %d =%d\nEnter to continue", 
            insurance_op2[], 
            insurance_op4[],
            login(insurance_op2[], insurance_op4[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case CLAIM:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            insurance_op2[], 
            claim(insurance_op2[]));
            
            __fpurge(stdin);
            getchar();
            break;
          case 31:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((CHOICE <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
