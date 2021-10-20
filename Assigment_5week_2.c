//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//    int counter;
//    float gallons, miles, tankAverage, overallAverage, total;
//    counter = 0;
//    total = 0;
//
//    while (true) {
//        printf("Enter the gallons used, (-1 to end): ");
//        scanf_s("%f", &gallons);
//
//        if (gallons == -1) {
//            overallAverage = total / counter;
//            printf("The overall average miles/gallon was %f\n", overallAverage);
//
//            return 0;
//        }
//
//        printf("Enter the miles driven: ");
//        scanf_s("%f", &miles);
//
//        tankAverage = miles / gallons;
//        printf("The miles/gallon for this tank was %f\n", tankAverage);
//        printf("\n");
//
//        total += tankAverage;
//        counter += 1;
//    }
//
//    return 0;
//}