#include "tokenizer.h"

int main(){

    int tokenCount = 0, maxTokens = 500;
    char string[] = "Each one of this will be a token";
    char * delimiter = " ";
    char * tokens[maxTokens];
    tokenCount = ParseLine(string, *delimiter, tokens, maxTokens);
    printTokens(tokens);

    return 0;
}
