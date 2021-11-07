#include <stdio.h>
#include <string.h>

int main()
{
    char hovaten[50];
    printf("nhap ho va ten cua ban: \n");
    fgets(hovaten, sizeof(hovaten), stdin);
    printf("co phai ban vua nhap la: \n");
    printf("con heo luoi, noi nhieu, thich kiem chuyen la "); puts(hovaten);

    
}