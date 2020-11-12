#include <stdio.h>;

int digit(int n);
int func(int z);



void task3() {
    int a;

    printf("Type a number in which you will find the largest digit:\n");
    scanf_s("%d", &a);

	printf("largest digit is: %d", digit(a));

}

void task5() {

    int z;
    printf("Please enter a number you want to add in a sequence:\n");
    scanf_s("%d", &z);

    printf("The result is %d", func(z));

}


int main() {
	int n = 1;
	while (n) {
		printf("\n\n");
		printf("Which task do you want to slove, task 3 or 5. (Type 0 to exit):\n");
		scanf_s("%d", &n);
        printf("\n");
		switch (n) {
		case 3: task3(); break;
        case 5: task5(); break;

		}
	}


	return 0;
}

int digit(int n) {

    if (n < 10) {
        return n;
    }
    int posled = n % 10;

    int ost = digit(n / 10);
    if (posled >= ost) {
        return posled;
    }
    else {
        return ost;
    }
}

int func(int z) {
    int a;
    printf("Please enter a number you want to add in a sequence(type -1 to finish and calculate):\n");
    scanf_s("%d", &a);

    if (a == -1)
        return z;

    else {
        z += a;
        return func(z);

    }

}
