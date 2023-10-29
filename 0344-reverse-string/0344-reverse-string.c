void reverseString(char* s, int sSize){
    char *start=&s[0];
    char *end=&s[sSize-1];
    while(start<=end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    
}