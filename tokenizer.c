#include "tokenizer.h"

int getLength(char * string){
    int length = 0;
    while(string[length] != 0x00) length++;
    return length;
}

void getToken(char ** tokenToSet, char ** srcString){
    *tokenToSet = *srcString;
    *srcString += getLength(*srcString) + 1;
}

void printTokens(char * tokens[]){
    for(int i = 0; tokens[i] ; i++)
        printf("%d: %s \n",i, tokens[i] );
}

int ParseLine( char* srcString, char delimiter, char* tokens[], int maxTokens){
    int tokenCount = 0;
    int length = getLength(srcString);

    if( length <= 0 ) return tokenCount;

    for(int k = 0; k < length; k++)
        if(srcString[ k ] == delimiter){
            srcString[ k ] = 0x00;
            tokenCount++;
        }


    tokenCount++;
    for(int i = 0; i < tokenCount; i++)
        getToken(&tokens[i], &srcString);

    return tokenCount;
}

int getTokenCount(char* srcString, char delimiter){
    int tokenCount, i;
    char tempChar;
    while((tempChar = srcString[i++])) {
        if(tempChar == ' ') tokenCount++;
    }

    return tokenCount + 1;
}
