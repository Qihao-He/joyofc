/*
 * compute the actual cost of buying 23 items at $13.95. We assume an
 * 18% discount rate and a 7.5% sales tax.
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int items;
    double list_price;
    double discount_rate;
    double sales_tax_rate;
    double total_price;
    double discount_price;
    double sales_tax;
    double final_cost;

    items=23;
    list_price=13.95;
    discount_rate=.18;
    sales_tax_rate=.075;

    total_price=items*list_price;
    discount_price=total_price-total_price*discount_rate;
    sales_tax=discount_price*sales_tax_rate;
    final_cost=discount_price+sales_tax;

    printf("List price per item:%f\n",list_price);
    printf("List price of %i iterm:%f\n",items,total_price);
    printf("Price after %f%% discount:%f\n",discount_rate*100,discount_price);
    printf("Sales tax at %f%%:%f\n",sales_tax_rate*100,sales_tax);
    printf("Total cost:%f\n",final_cost);
    return 0;
}
