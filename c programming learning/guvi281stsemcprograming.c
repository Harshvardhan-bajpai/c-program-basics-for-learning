/*#include <stdio.h>

int main() {
    char operator;
    int a, b, z;
    float c;
    double d, x, m;
    z=0;
    scanf("%d", &a);
    while (z<a){
        scanf("%d", &b);
        scanf("%f", &c);
        scanf(" %c", &operator);
        scanf("%lf", &d);
        z+=1;


        switch (operator) {
            case '+':
                x = b + c;
                break;
            case '-':
                x = b - c;
                break;
            case '*':
                x = b * c;
                break;
            case '/':
                if (c != 0) {
                    x = b / c;
                }
                break;
        }

        m = x + d;
        printf("%lf\n", m);
    }

    return 0;
}
*/

#include <stdio.h>

int MAX_LENGTH;

MAX_LENGTH=1000

void swapCharacters(char *str, char mostFreq, char leastFreq) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == mostFreq) {
            str[i] = leastFreq;
        } else if (str[i] == leastFreq) {
            str[i] = mostFreq;
        }
    }
}

int main() {
    char str[MAX_LENGTH];
    int freq[26] = {0};
    int i, maxFreq = 0, minFreq = MAX_LENGTH;
    char mostFreqChar, leastFreqChar;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqChar = i + 'a';
        }
        if (freq[i] > 0 && freq[i] < minFreq) {
            minFreq = freq[i];
            leastFreqChar = i + 'a';
        }
    }

    swapCharacters(str, mostFreqChar, leastFreqChar);

    printf("%s\n", str);

    return 0;
}
