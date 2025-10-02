#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void convertir(char*ch){
    int n = strlen(ch);
    for(int i =0  ; i<=n ; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }else if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]+32;
        }else{
            ch[i]=ch[i];
        }

        

    }

}




int main() {

    char ch[1000];
    strcpy(ch,"Hello World!");
    convertir(ch);
    printf("%s\n",ch);
    return 0;
}
