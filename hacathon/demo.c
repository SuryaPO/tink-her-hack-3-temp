#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Chatbot: Hello! Type something to chat. Type 'bye' to exit.\n");

    while (1) {
        printf("You: ");
        gets(input);  // Read user input

        // Convert input to lowercase for case-insensitive matching
        for (int i = 0; input[i]; i++) {
            if (input[i] >= 'A' && input[i] <= 'Z') {
                input[i] = input[i] + 32;
            }
        }

        // Responses
        if (strcmp(input, "hello") == 0) {
            printf("Chatbot: Hi there!\n");
        } else if (strcmp(input, "how are you?") == 0) {
            printf("Chatbot: I'm just a simple bot, but I'm doing fine!\n");
        } else if (strcmp(input, "what is your name?") == 0) {
            printf("Chatbot: I'm a simple C chatbot.\n");
        } else if (strcmp(input, "bye") == 0) {
            printf("Chatbot: Goodbye! Have a great day.\n");
            break;
        } else {
            printf("Chatbot: Sorry, I don't understand that.\n");
        }
    }

    return 0;
}
