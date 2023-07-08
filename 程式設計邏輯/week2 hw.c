  22 21	                                                                                                                                                                                                                                                                                                                                                                                                          #include <stdio.h>
#include <stdlib.h>                             
int main()
{
	short int no1 = 200; /* 宣告為短整數 */
	int no2 = 200;               
	long int no3 = 200;                       
	printf("%d%佔有%d位元組\n", no1, sizeof(no1)); /* 以10進位輸出 */
	printf("%d%佔有%d位元組\n", no2, sizeof(no2)); /* 以10進位輸出 */
	printf("%d%佔有%d位元組\n", no3, sizeof(no3)); /* 以10進位輸出 */
	return 0;
                                                          