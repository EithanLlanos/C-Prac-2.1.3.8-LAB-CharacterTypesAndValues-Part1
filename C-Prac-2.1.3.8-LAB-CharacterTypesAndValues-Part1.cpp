//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them, but do not change any character values.
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//Code 
// 
//#include <stdio.h>
//
//int main()
//{
//	printf("Diff beetween '%c' and '%c' is : %d\n", 'c', 'a', 'c', 'a');
//	printf("Diff beetween '%c' and '%c' is : %d\n", 'a', 'c', 'a'  'c');
//	return 0;
//}
//
//Expected output
//Diff beetween 'c' and 'a' is : 2
//Diff beetween 'a' and 'c' is : -2
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
	printf("Difference between '%c' and '%c' is: %d\n", 'c', 'a', 'c' - 'a');
	printf("Difference between '%c' and '%c' is: %d\n", 'a', 'c', 'a' - 'c');
	return 0;
}