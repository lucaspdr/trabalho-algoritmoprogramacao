// Função para verificar se uma sequência de caracteres é um palíndromo
int isPalindrome(const char *sequence) {
    int length = strlen(sequence);
    int i = 0;
    int j = length - 1;

    while (i < j) {
        // Ignora espaços em branco e pontuação
        while (i < j && !isalnum(sequence[i]))
            i++;
        while (i < j && !isalnum(sequence[j]))
            j--;

        // Converte os caracteres para letras minúsculas para comparação
        char left = tolower(sequence[i]);
        char right = tolower(sequence[j]);

        if (left != right) {
            return 0;  // Não é um palíndromo
        }

        i++;
        j--;
    }

    return 1;  // É um palíndromo
}

int main() {
    // Exemplo de uso da verificação de palíndromo

    const char *word = "reviver";

    if (isPalindrome(word)) {
        printf("%s é um palíndromo.\n", word);
    } else {
        printf("%s não é um palíndromo.\n", word);
    }

    return 0;
}
