int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    getline(cin, mensagem);

    mensagem.erase(remove_if(mensagem.begin(), mensagem.end(), ::isspace), mensagem.end());

    bool palindromo = true;
    int n = mensagem.length();
    for (int i = 0; i < n / 2; i++) {
        if (mensagem[i] != mensagem[n - 1 - i]) {
            palindromo = false;
            break;
        }
    }

    if (palindromo) {
        cout << "A mensagem é um palíndromo!" << endl;
    } else {
        cout << "A mensagem não é um palíndromo." << endl;
    }
    return 0;
}