#include <stdio.h>

int main() {
    int num, basdeg = 0;

    printf("Please enter a number : ");
    scanf("%d", &num);

    // Finding how many digits a number has
    int temp = num;
    while (temp != 0) {
        temp = temp / 10;
        basdeg++;
    }

    //Now the process of reversing the digits of the number
    int revnum = 0;
    temp = num;
    while (temp != 0) {
        int number = temp % 10;
        revnum = revnum * 10 + number;
        temp = temp / 10;
    }

    printf("İnverted Number: %d\n", revnum);
    
    
    // Now control of the palindrome number
    if(num==revnum){
	printf("This number is palindrome number");
	}
	else{
	printf("This number isn't palindrome number");
		
	}

    return 0;
}

