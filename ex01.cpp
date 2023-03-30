int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    getline(cin, mensagem);

    int comprimento_linha = mensagem.length();
    int posicao_inicial = (80 - comprimento_linha) / 2;
    for (int i = 0; i < posicao_inicial; i++) {
        cout << " ";
    }
    cout << mensagem << endl;

    for (int linha = 6; linha <= 20; linha++) {
        for (int coluna = 0; coluna < comprimento_linha; coluna++)
           {
            for (int i = 6; i < linha; i++) {
                cout << " ";
            }
            cout << mensagem[coluna] << endl;
        }
    }
    return 0;
}