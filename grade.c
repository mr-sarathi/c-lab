#include <stdio.h>
int main() {
	int marks;
	char grade;
	
	//get marks from the user 
	printf("enter marks (0 to 100): ");
	scanf("%d", &marks);
	
	// validate input
	if (marks < 0 || marks> 100) {
		printf("invalid input. marks should be between 0m and 100.\n");
		return 1;
	}
	
	//determine grade using switch 
	switch (marks / 10) {
		case 10: // for 100
		case 9:
		case 8:
		   grade = 'A';
		   break;
		case 7:
		case 6:
		   grade ='B';
		   break;
		case 5:
		   grade = 'C';
		   break;
		case 4:
		   grade = 'D';
		   break;
		default:
		grade = 'F';
	}
	// display the grade
	printf("grade: %c\n", grade);
	
	return 0;
}
