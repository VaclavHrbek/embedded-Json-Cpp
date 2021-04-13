#include <stdio.h>

    
extern char _binary_data_json_start;
extern char _binary_data_json_end;

int main(){

    char *p = &_binary_data_json_start;
    while(p != &_binary_data_json_end){
	    putchar(*p++);
    }
    
    return 0;

}
