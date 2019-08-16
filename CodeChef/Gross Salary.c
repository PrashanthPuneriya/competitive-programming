#include <stdio.h>
 
int main() {
 
    int t;
    int salary;
    int i;
 
    scanf("%d", &t);
    for ( i =0; i < t; i++) {
        scanf("%d", &salary);
        if ( salary < 1500)
            printf("%d\n", salary * 2);
        else 
            printf("%.2f\n", salary * 1.98 +500);
    }
 
	return 0;
}