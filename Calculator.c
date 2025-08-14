#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int init; // Variable to store calculator mode choice

    while (1) { // Infinite loop until user exits
        // Display main menu
        printf("===== My Private Calculator =====\n");
        printf("1. Arithmetic Calculator\n");
        printf("2. Trigonometric Calculator\n");
        printf("3. Quadratic Solver\n");
        printf("4. Exponential Calculator\n");
        printf("5. Exit\n");
        printf("Select mode: ");
        scanf("%d", &init);

        // Exit program if user chooses 5
        if (init == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        // Arithmetic Calculator
        if (init == 1) {
            float a, b; // Input numbers
            printf("Enter two values: ");
            scanf("%f %f", &a, &b);

            // Show arithmetic operations
            printf("Select operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
            int choice;
            scanf("%d", &choice);

            // Perform chosen operation
            switch (choice) {
                case 1:
                    printf("%f + %f = %f\n", a, b, a + b);
                    break;
                case 2:
                    printf("%f - %f = %f\n", a, b, a - b);
                    break;
                case 3:
                    printf("%f * %f = %f\n", a, b, a * b);
                    break;
                case 4:
                    if (b != 0)
                        printf("%f / %f = %f\n", a, b, a / b);
                    else
                        printf("Error: Division by zero!\n");
                    break;
                default:
                    printf("Invalid choice\n");
            }
        }

        // Trigonometric Calculator
        else if (init == 2) {
            float degrees; // Input in degrees
            printf("Enter angle in degrees: ");
            scanf("%f", &degrees);

            // Convert degrees to radians for math functions
            float radians = degrees * (M_PI / 180.0);

            // Show trigonometric operations
            printf("Select operation:\n1. sin\n2. cos\n3. tan\n4. sin inverse\n5. cos inverse\n6. tan inverse\n7. cosec\n8. sec\n9. cot\n");
            int choice;
            scanf("%d", &choice);

            // Perform chosen trig calculation
            switch (choice) {
                case 1:
                    printf("sin(%f) = %f\n", degrees, sin(radians));
                    break;
                case 2:
                    printf("cos(%f) = %f\n", degrees, cos(radians));
                    break;
                case 3:
                    printf("tan(%f) = %f\n", degrees, tan(radians));
                    break;
                case 4:
                    printf("asin(%f) = %f degrees\n", degrees, asin(degrees) * (180.0 / M_PI));
                    break;
                case 5:
                    printf("acos(%f) = %f degrees\n", degrees, acos(degrees) * (180.0 / M_PI));
                    break;
                case 6:
                    printf("atan(%f) = %f degrees\n", degrees, atan(degrees) * (180.0 / M_PI));
                    break;
                case 7:
                    if (sin(radians) != 0)
                        printf("cosec(%f) = %f\n", degrees, 1 / sin(radians));
                    else
                        printf("Undefined (sin is zero)\n");
                    break;
                case 8:
                    if (cos(radians) != 0)
                        printf("sec(%f) = %f\n", degrees, 1 / cos(radians));
                    else
                        printf("Undefined (cos is zero)\n");
                    break;
                case 9:
                    if (tan(radians) != 0)
                        printf("cot(%f) = %f\n", degrees, 1 / tan(radians));
                    else
                        printf("Undefined (tan is zero)\n");
                    break;
                default:
                    printf("Invalid choice\n");
            }
        }

        // Quadratic Equation Solver
        else if (init == 3) {
            int A, B, C; // Coefficients of quadratic equation
            printf("Equation format: ax^2 + bx + c = 0\nA = ");
            scanf("%d", &A);
            printf("B = ");
            scanf("%d", &B);
            printf("C = ");
            scanf("%d", &C);

            // Calculate discriminant
            float discriminant = (B * B) - (4 * A * C);

            // Check discriminant for nature of roots
            if (discriminant > 0) {
                // Two real and distinct roots
                float root1 = (-B + sqrt(discriminant)) / (2 * A);
                float root2 = (-B - sqrt(discriminant)) / (2 * A);
                printf("Roots: %f and %f\n", root1, root2);
            } 
            else if (discriminant == 0) {
                // One real and equal root
                float root = -B / (2 * A);
                printf("Root: %f\n", root);
            } 
            else {
                // Complex roots
                float realPart = -B / (2 * A);
                float imagPart = sqrt(-discriminant) / (2 * A);
                printf("Complex Roots: %f + %fi and %f - %fi\n", realPart, imagPart, realPart, imagPart);
            }
        }

        // Exponential Calculator
        else if (init == 4) {
            float base, exp; // Base and exponent
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter exponent: ");
            scanf("%f", &exp);

            // Calculate base^exponent
            printf("%f ^ %f = %f\n", base, exp, pow(base, exp));
        }

        // If user enters invalid mode
        else {
            printf("Invalid mode. Please select a valid option.\n");
        }

        printf("\nPress Enter to continue...");
        getchar(); // To consume newline
        getchar(); // Wait for Enter key
    }

    return 0; // Program ends
}
