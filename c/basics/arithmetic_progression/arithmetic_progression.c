/**
 * @file arithmetic_progression.c
 * @brief Calculate the N-th term of an Arithmetic Progression (AP).
 *
 * Formula:
 *   a_n = a_1 + (n - 1) * d
 *
 * Where:
 *   - a_1 : First term (initial term)
 *   - d   : Common difference
 *   - n   : Number of terms (position of the target term, n >= 1)
 *   - a_n : The n-th term of the sequence
 *
 * Example:
 *   Input:  a1 = 2, d = 3, n = 5
 *   Output: an = 2 + (5 - 1) * 3 = 14
 */

#include <stdio.h>

int main(void)
{
    float a1, d, an;
    int n;
    
    printf("Enter The Initial Term (a1):");
    scanf("%f", &a1);

    printf("Enter the difference in the Artimetic Sequince: ");
    scanf("%f", &d);

    printf("Enter the number of elemnts in the Arithmetic Sequence: ");
    scanf("%d", &n);

    // Calculate N-th term
    an = a1 + (n - 1) * d;

    // Display result (%.2f limits floating-point to 2 decimal places)
    printf("\nThe %d-th term of the Arithmetic Sequence is: %.2f\n", an);

    return 0;
}
