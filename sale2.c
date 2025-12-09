#include <stdio.h>

int main(){
	int item1,item2,item3;
	float vat = 1.07;
	scanf("%d",&item1);
    printf("%.2f\n", (item1 -(item1 * 0.05)) * vat );
	scanf("%d",&item2);
    printf("%.2f\n", ((item2+item1) - ((item2+item1) * 0.15)) * vat);
	scanf("%d",&item3);
    printf("%.2f\n", ((item1+item2+item3)  - ((item1+item2+item3) * 0.3))* vat );
    return 0;
}
