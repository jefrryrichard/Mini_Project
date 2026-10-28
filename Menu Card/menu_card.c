/*
Name: Jefrry Richard P
Date: 28/10/2026
Description: Menu Card
*/

#include<stdio.h>
int main(){
    int option, payment;
    int total = 0;
    float gst = 0,grand_total = 0;
    int chicken_biriyani = 0, pasta = 0, masala_dosa = 0, pizza = 0, burger = 0;

    printf("------- Welcome to Le Cafe -------\n\n");
    do{
        label:
        printf("1. Pizza\t\t    399\n2. Burger\t\t    200 \n3. Pasta\t\t    450\n4. Chicken Biriyani\t    249\n5. Masala Dosa\t\t    60\nPress '6' to exit the menu\n");
        printf("Enter your choice: \n");
        scanf("%d",&option);

        switch(option){

            case 1:
            printf("You ordered pizza X %d\n",++pizza);
            total += 399;
            break;

            case 2:
            printf("You ordered burger X %d\n",++burger);
            total+= 200;
            break;

            case 3:
            printf("You ordered pasta X %d\n",++pasta);
            total+= 450;
            break;
           
            case 4:
            printf("You ordered Chicken Biriyani X %d\n",++chicken_biriyani);
            total+= 249;
            break;

            case 5:
            printf("You ordered Masala Dosa X %d\n",++masala_dosa);
            total+= 60;
            break;

            case 6:
            if(total==0){
                printf("No item has been ordered\n");
                return 1;
            }
            printf("Menu exited\n");
            break;
            
            default:
            printf("The selected option is not available !\n");
            goto label;
        }
    
    }while(option>=1&&option<=5);

 
    if(total){
        printf("_________________________________\n\t   YOUR ORDER\n_________________________________\n\n");
        if(pizza)
        printf("Pizza  X %d  \t\t %d\n",pizza,pizza*399);
        if(burger)
        printf("Burger X %d  \t\t %d\n",burger,burger*200);
        if(pasta)
        printf("Pasta  X %d  \t\t %d\n",pasta,pasta*450);
        if(chicken_biriyani)
        printf("Chicken Biriyani X %d     %d\n",chicken_biriyani,chicken_biriyani*249);
        if(masala_dosa)
        printf("Masala Dosa X %d  \t %d\n",masala_dosa,masala_dosa*60);
        gst = 0.18*total;
        grand_total = total+gst;    
        printf("_________________________________\n");
        printf("Total: \t\t\t %d\n",total);
        printf("GST(18%%):\t\t %g\n",gst);
        printf("Grand Total:\t\t %g\n",grand_total);
        printf("_________________________________\n");
    }

    do{
    printf("Choose the payment option: \n1.Cash\n2.Card\n3.UPI\n_________________________________\n");
    scanf("%d",&payment);

    switch(payment){
        case 1:
        printf("Payment of Rs. %g has been made via cash",grand_total);
        break;

        case 2:
        printf("Payment is being made via Card...\nPayment of Rs. %g is successful\n",grand_total);
        break;

        case 3:
        printf("Payment is being made via UPI...\nPayment of Rs. %g is successful\n",grand_total);
        break;

        default:
        printf("Invalid payment option\n");
        }
    
    }while(payment<1||payment>3);
    printf("\nThank you for choosing us, visit again !\n");
}
