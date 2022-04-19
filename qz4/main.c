 #include<stdio.h>
 #include<stdlib.h>
 //swap, swap array, copy string
 
 
 int swap_func(int* i, int* j) {
 	int tmp;
 	tmp = *i;
 	*i = *j;
 	*j = tmp;
 }
 
 int swap_array_func(int *source, int* dest, int size) {
 	for (int i = 0; i < size; i++){
 		int tmp;
 		tmp = source[i];
 		source[i] = dest[i];
 		dest[i] = tmp;
	}
 }
 
 int print_array(int* array, int size) {
 	for (int i = 0; i < size; i++){
 		if(i == (size - 1)){
 			printf("%d]\n", array[i]);
		}
		else printf("%d, ", array[i]);	
	} 
 }
 
char* copy_string(char* s) {
	int len = 0;
	while (*(s+len) != '\0') len++;	
	//printf("%d ", len);
	char* cstr = (char*)calloc(len, sizeof(char));
	for(int i = 0; i < len; i++){
		cstr[i] = *(s+i);
	}
	return cstr;
}
 
 int main() {
 	int n, m;
 	n = 1;
 	m = 2;
 	swap_func(&n, &m);
 	printf("No.1--------------------------\n");
 	printf("after swap array, n = %d, m = %d", n, m);
 	//
 	printf("\nNo.2--------------------------\n");
 	int size = 10;
 	int source[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
 	int dest[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
 	swap_array_func(source, dest, size);
 	printf("after swap array, source array = [");
 	print_array(source, size);
 	printf("after swap array, dest array = [");
 	print_array(dest, size);
 	//
 	printf("No.3--------------------------\n");
 	char str[] = "IU!IU!IU!IU!";
 	char* cp_str = copy_string(str);
 	printf("copy string = %s\n", cp_str);
 	free(cp_str);
 	
 	return 0;
 } 
