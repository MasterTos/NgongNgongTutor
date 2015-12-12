#include <stdio.h>

typedef struct{
    int parking;
    float store_area, plaza_area;
} Department;

int isLarge(Department *ds) {
    return (*ds).parking >= 500 && (*ds).store_area > (*ds).plaza_area;
}

int main() {
    while(1) {
        Department ds;
        printf("Enter parking size:");
        scanf("%d", &ds.parking);
        printf("Enter store area:");
        scanf("%d", &ds.store_area);
        printf("Enter plaza area:");
        scanf("%d", &ds.plaza_area);
        if(ds.parking == 0 && ds.store_area == 0 && ds.plaza_area == 0)
            return 0;
        if(isLarge(&ds))
            printf("This department store is large\n");
        else
            printf("This department store is not large\n");

        printf("===================================\n");
    }
    return 0;
}
