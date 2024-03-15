
#include <stdio.h>
int main() {
    int choice;
    double area;
    printf("Choose a shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: // Circle
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area =3.14 * radius * radius;
                printf("The area of the circle is: %lf\n", area);
            }
            break;

        case 2: // Rectangle
            {
                double length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                area = length * width;
                printf("The area of the rectangle is: %lf\n", area);
            }
            break;

        case 3: // Triangle
            {
                double base, height;
                printf("Enter the base of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = 0.5 * base * height;
                printf("The area of the triangle is: %lf\n", area);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

 return 0;
}

