#include <stdio.h>

int main() {
    //declare valiable
    float height;
    double bankbalance;
    char phonenumber[15];

    //get height from the user
    printf("enter your height in meters");
    scanf("%f",&height);

    //get bank balance from the user
    printf("enter your bank balance in keny shillings");
    scanf("%lf",&bankbalance);

    //get phone number from the user
    printf("enter your phone number");
    scanf("%14s",phonenumber);

    //display the entered information
    printf("\n---your details---\n");
    printf("height:%.2f meters\n",height);
    printf("bankbalance: ksh %.2f\n",bankbalance);
    printf("phone number:%s\n",phonenumber);
}