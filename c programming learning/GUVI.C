/*
//question1
 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a;
        float b;
        char op;
        double c, result = 0.0;

        scanf("%d %f %c %lf", &a, &b, &op, &c);

        switch (op) {
            case '+':
                result = a + b + c;
                break;
            case '-':
                result = a - b + c;
                break;
            case '*':
                result = a * b + c;
                break;
            case '/':
                if (b != 0) {
                    result = a / b + c;
                } else {
                    result = c;
                }
                break;
            default:
                continue;
        }
    }

    return 0;
}
*/


/*
//question 3
#include <stdio.h>

int main() {
    short a;
    long long b;
    
    scanf("%hd", &a);
    scanf("%lld", &b);
    
    long long sum = a + b;
    printf("Sum: %lld\n", sum);

    long long difference = b - a;
    printf("Difference: %lld\n", difference);

    long long product = a * b;
    printf("Product: %lld\n", product);

    if (a != 0) {
        long long division = b / a;
        printf("Division: %lld\n", division);
    } else {
        printf("Division: not possible\n");
    }

    return 0;
}
*/

/*
//question 5
#include <stdio.h>

int main() {
    int n,size;
    size=100;

    scanf("%d", &n);


    float arr[size];
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }


    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = sum / n;


    float max = arr[0];
    float min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    float variance_sum = 0.0;
    for (int i = 0; i < n; i++) {
        variance_sum += (arr[i] - average) * (arr[i] - average);
    }
    float variance = variance_sum / n;

    float std_dev = 0.0;
    float guess = variance / 2.0;
    float epsilon = 0.00001;
    while ((guess * guess - variance) >= epsilon || (variance - guess * guess) >= epsilon) {
        guess = (guess + variance / guess) / 2.0;
    }
    std_dev = guess;

    printf("Average: %.2f\n", average);
    printf("Maximum: %.2f\n", max);
    printf("Minimum: %.2f\n", min);
    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}
*/


