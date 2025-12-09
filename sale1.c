#include <stdio.h>

int main() {
    float item1 , item2 , item3;

    scanf("%f",&item1);
    printf("%f\n",item1*0.95 );
    scanf("%f",&item2);
    printf("%f\n",(item1+item2)*0.85);
    scanf("%f",&item3);
    printf("%f",(item1+item2+item3)*0.7);
    return 0;
}
