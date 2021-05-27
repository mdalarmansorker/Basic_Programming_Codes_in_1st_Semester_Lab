#include <stdio.h>
#include <math.h>

int main()
{
float x1,y1, d;
    printf("Enter coordinates of points A: ");
    scanf("%f %f",&x1,&y1);
    float x2,y2;
    printf("Enter coordinates of points B: ");
    scanf("%f %f",&x2,&y2);
    d=pow((x1-x2),2)+pow((y1-y2),2);
    printf("The squard distance is %.2f\n",d);
    printf("The distance is %.2f\n",sqrt(d));
    return 0;
}
